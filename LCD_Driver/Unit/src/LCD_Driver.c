/*
 * lcd.c
 *
 *  Created on: Apr 12, 2022
 *      Author: kgerg
 */

/* Private includes ----------------------------------------------------------*/

#include "LCD_Driver.h"
#include "LCD_HWI.h"
#include <math.h>

/* Private macros ------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/

static uint8_t buffer_left[8][64];
static uint8_t buffer_right[8][64];

/* Local function declarations -----------------------------------------------*/

static void LCD_Write(uint8_t value,LCD_HWI_CS_Lines_State CSState,LCD_HWI_Instruction_Data_State DIState);
static void LCD_Data_Latch();

/* Local function definitions ------------------------------------------------*/

static void LCD_Write(uint8_t value,LCD_HWI_CS_Lines_State CSState,LCD_HWI_Instruction_Data_State DIState)
{
	// Adat vagy Instrukció
	LCD_HWI_SetDILine(DIState);
	// Melyik drivernek írok
	LCD_HWI_SetCSLines(CSState);
	// Kiírandó adat
	LCD_HWI_SetDataLines(value);
	// Adat latch
	LCD_Data_Latch();
	// Kiválasztó jelek kikapcsolása
	LCD_HWI_SetCSLines(LCD_HWI_CS_OFF);
}
static void LCD_Data_Latch()
{
	// Időzítés miatt használok delay-eket, amúgy egy feszültségimpulzus az E vonalon
	LCD_HWI_Delay(1);
	LCD_HWI_SetLatch(LCD_HWI_Latch_OFF);
	LCD_HWI_Delay(1);
	LCD_HWI_SetLatch(LCD_HWI_Latch_ON);
	LCD_HWI_Delay(1);
}

/* Global function definitions -----------------------------------------------*/

void LCD_Init()
{
	// Vonalak alaphelyzetbe állítása

	LCD_HWI_SetEnable(LCD_HWI_Enable_OFF);
	LCD_HWI_SetLatch(LCD_HWI_Latch_ON);
	LCD_HWI_SetRWLine(LCD_HWI_RW_Write);
	LCD_HWI_SetReset(LCD_HWI_RST_OFF);
	LCD_HWI_SetCSLines(LCD_HWI_CS_OFF);

	// LCD és szintillesztők engedélyezése
	LCD_HWI_SetEnable(LCD_HWI_Enable_ON);

	// LCD_ON parancs kiküldése
	LCD_Write(LCD_COMMAND_DISPLAY_ON,LCD_HWI_CS12,LCD_HWI_DI_Instruction);

	// Page, Y és Z pointerek állítása
	LCD_Write(LCD_SETYADDRESS,LCD_HWI_CS12,LCD_HWI_DI_Instruction);
	LCD_Write(LCD_SETPAGE,LCD_HWI_CS12,LCD_HWI_DI_Instruction);
	LCD_Write(LCD_DISPLAY_START_LINE,LCD_HWI_CS12,LCD_HWI_DI_Instruction);
}

void LCD_Fill_Display(uint8_t value)
{
	for (uint8_t p = 0; p < LCD_PAGE_NUMBER; p++) {
		LCD_Write(LCD_SETYADDRESS, LCD_HWI_CS12, LCD_HWI_DI_Instruction);
		LCD_Write(LCD_SETPAGE|p, LCD_HWI_CS12, LCD_HWI_DI_Instruction);
		for (uint8_t i = 0; i < 64; i++) {
			LCD_Write(value,LCD_HWI_CS12,LCD_HWI_DI_Data);
		}
	}
}
void LCD_Write_BufferPixel(uint8_t pixel, int16_t x,int16_t y)
{
	// Bufferben egy pixel írása
	// Kijelző bal oldala
	if(x<64 && x >= 0)
	{
		if (y < 64 && y >= 0) {

			if (pixel)
				buffer_left[y >> 3][x] |= (1 << (y % 8)); // Set bit
			else
				buffer_left[y >> 3][x] &= ~(1 << (y % 8)); // Clear bit
		}
	}
	// Kijelző jobb oldala
	else if(x<128 && x>=64)
	{
		if (y < 64 && y >= 0) {
			if (pixel)
				buffer_right[y >> 3][x-64] |= (1 << (y % 8)); // Set bit
			else
				buffer_right[y >> 3][x-64] &= ~(1 << (y % 8)); // Clear bit
		}
	}
}
void LCD_Invalidate()
{
	// Teljes kijelző frissítése buffer tartalmával
	for (uint8_t p = 0; p < LCD_PAGE_NUMBER; p++) {
		// Page-n belüli címzés
		LCD_Write(LCD_SETYADDRESS, LCD_HWI_CS12, LCD_HWI_DI_Instruction);
		// Page címzése
		LCD_Write(LCD_SETPAGE | p, LCD_HWI_CS12, LCD_HWI_DI_Instruction);
		// Kijelző bal oldalának írása
		for (uint8_t i = 0; i < LCD_WIDTH/2; i++) {
			LCD_Write(buffer_left[p][i], LCD_HWI_CS1, LCD_HWI_DI_Data);
		}
		// Kijelző jobb oldalának írása
		for (uint8_t i = 0; i < LCD_WIDTH/2; i++) {
			LCD_Write(buffer_right[p][i], LCD_HWI_CS2, LCD_HWI_DI_Data);
		}
	}
}


void LCD_Fill_Buffer(uint8_t value)
{
	// Buffer töltése megadott adattal
	for(int i = 0;i<8;i++)
	{
		for (int var = 0; var < 64; ++var) {
			buffer_left[i][var] = value;
			buffer_right[i][var] = value;
		}
	}
}






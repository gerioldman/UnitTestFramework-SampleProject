/*
 * lcd.c
 *
 *  Created on: Apr 12, 2022
 *      Author: kgerg
 */

#include "lcd.h"
#include "main.h"
#include "font8x8_basic.h"
#include <math.h>
static uint8_t buffer_left[8][64];
static uint8_t buffer_right[8][64];

void LCD_Init()
{
	// Vonalak alaphelyzetbe állítása

	LCD_Enable(LCD_OFF);
	HAL_GPIO_WritePin(LCD_E_GPIO_Port, LCD_E_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LCD_R_W_GPIO_Port, LCD_R_W_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_SET);
	LCD_SetCSLines(LCD_CS_OFF);

	// LCD és szintillesztők engedélyezése
	LCD_Enable(LCD_ON);

	// LCD_ON parancs kiküldése
	LCD_Write(LCD_COMMAND_DISPLAY_ON,LCD_CS12,LCD_DI_Instruction);

	// Page, Y és Z pointerek állítása
	LCD_Write(LCD_SETYADDRESS,LCD_CS12,LCD_DI_Instruction);
	LCD_Write(LCD_SETPAGE,LCD_CS12,LCD_DI_Instruction);
	LCD_Write(LCD_DISPLAY_START_LINE,LCD_CS12,LCD_DI_Instruction);
}
void LCD_Write(uint8_t value,LCDCSLinesState CSState,LCDInstructionDataState DIState)
{
	// Adat vagy Instrukció
	LCD_SetDILine(DIState);
	// Melyik drivernek írok
	LCD_SetCSLines(CSState);
	// Kiírandó adat
	LCD_SetDataLines(value);
	// Adat latch
	LCD_Data_Latch();
	// Kiválasztó jelek kikapcsolása
	LCD_SetCSLines(LCD_CS_OFF);
}
void LCD_Data_Latch()
{
	// Időzítés miatt használok delay-eket, amúgy egy feszültségimpulzus az E vonalon
	LCD_Delay(1);
	HAL_GPIO_WritePin(LCD_E_GPIO_Port, LCD_E_Pin, GPIO_PIN_SET);
	LCD_Delay(1);
	HAL_GPIO_WritePin(LCD_E_GPIO_Port, LCD_E_Pin, GPIO_PIN_RESET);
	LCD_Delay(1);
}
void LCD_SetRWLine(LCDRWState state)
{
	// Set Read or Write
	if(state == LCD_RW_Write)
	{
		HAL_GPIO_WritePin(LCD_R_W_GPIO_Port, LCD_R_W_Pin, GPIO_PIN_RESET);
	}
	else
		HAL_GPIO_WritePin(LCD_R_W_GPIO_Port, LCD_R_W_Pin, GPIO_PIN_SET);
}
void LCD_Enable(LCDEnableState enable)
{
	// Set enable or disable
	if(enable == LCD_ON)
	{
		HAL_GPIO_WritePin(LCD_EN_GPIO_Port, LCD_EN_Pin, GPIO_PIN_RESET);
	}
	else HAL_GPIO_WritePin(LCD_EN_GPIO_Port,LCD_EN_Pin,GPIO_PIN_SET);
}
inline void LCD_SetDataLines(uint8_t value)
{
	// Adatvonalok írása
	GPIOC->BSRR = 0x000000FF&(uint32_t)value;
	GPIOC->BSRR = (((uint32_t)(~value))&0x000000FF) << 16;
}
HAL_StatusTypeDef LCD_SetCSLines(LCDCSLinesState state)
{
	//Kiválasztó jelek állítása
	switch (state) {
	case LCD_CS_OFF:
		HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_RESET);
		break;
	case LCD_CS1:
		HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_RESET);
		break;
	case LCD_CS2:
		HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_SET);
		break;
	case LCD_CS12:
		HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_SET);
		break;
	default:
		return HAL_ERROR;
	}
	return HAL_OK;
}
void LCD_SetDILine(uint8_t state)
{
	// Adat vagy Instrukció
	if(state == LCD_DI_Instruction)
		{
			HAL_GPIO_WritePin(LCD_D_I_GPIO_Port, LCD_D_I_Pin, GPIO_PIN_RESET);
		}
		else HAL_GPIO_WritePin(LCD_D_I_GPIO_Port, LCD_D_I_Pin,GPIO_PIN_SET);
}

void LCD_Delay(uint32_t us)
{
	// Szoftveres delay, csak arra kell, hogy legalább 500ns delay legyen Latch állításánál
	for(uint32_t i=0;i<100*us;i++)
	{
		__NOP();
	}
}

void LCD_Fill_Display(uint8_t value)
{
	for (uint8_t p = 0; p < LCD_PAGE_NUMBER; p++) {
		LCD_Write(LCD_SETYADDRESS, LCD_CS12, LCD_DI_Instruction);
		LCD_Write(LCD_SETPAGE|p, LCD_CS12, LCD_DI_Instruction);
		for (uint8_t i = 0; i < 64; i++) {
			LCD_Write(value,LCD_CS12,LCD_DI_Data);
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
		LCD_Write(LCD_SETYADDRESS, LCD_CS12, LCD_DI_Instruction);
		// Page címzése
		LCD_Write(LCD_SETPAGE | p, LCD_CS12, LCD_DI_Instruction);
		// Kijelző bal oldalának írása
		for (uint8_t i = 0; i < LCD_WIDTH/2; i++) {
			LCD_Write(buffer_left[p][i], LCD_CS1, LCD_DI_Data);
		}
		// Kijelző jobb oldalának írása
		for (uint8_t i = 0; i < LCD_WIDTH/2; i++) {
			LCD_Write(buffer_right[p][i], LCD_CS2, LCD_DI_Data);
		}
	}
}
void LCD_Draw_Char(char c,int16_t x,int16_t y)
{
	// Karakter rajzolása a bufferbe egy font8x8 tömbből
	for(int i = 0;i<8;i++)
	{
		for (int j = 0; j < 8; ++j) {
			if (font8x8_basic[(uint8_t)c][j] & (1 << i))
				LCD_Write_BufferPixel(LCD_PIXEL_SET, x + i, y + j);
			else
				LCD_Write_BufferPixel(LCD_PIXEL_RESET, x + i, y + j);
		}
	}
}
void LCD_Draw_String(char *string,int16_t x,int16_t y)
{
	// Sztring rajzolása bufferbe, Draw_Char függvényt hívja meg többször
	char c = *string;
	string++;
	uint8_t char_offset = 0;
	while(c != '\0')
	{
		LCD_Draw_Char(c,x+char_offset,y);
		char_offset+=8;
		c = *string;
		string++;
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

void LCD_Draw_Horizontal_Line(int16_t xc, int16_t yc,int16_t l)
{
	for (int i = 0; i < l; ++i) {
		LCD_Write_BufferPixel(LCD_PIXEL_SET, xc+i, yc);
	}
}

// Kör rajzolása, először a kör egyenlétőből kiindúlva írtam magamnak egy függvényt, de az elég béna volt, így ezt a kész megoldást használom
void LCD_Draw_Circle(int16_t xc,int16_t yc,int16_t r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	LCD__DrawCircle(xc, yc, x, y);
	while (y >= x) {
		x++;
		if (d > 0) {
			y--;
			d = d + 4 * (x - y) + 10;
		} else
			d = d + 4 * x + 6;
		LCD__DrawCircle(xc, yc, x, y);
	}
}

void LCD__DrawCircle(int16_t xc, int16_t yc, int16_t x, int16_t y)
{
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc-x, yc-y);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc+x, yc+y);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc-x, yc+y);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc+x, yc-y);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc+y, yc+x);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc-y, yc-x);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc+y, yc-x);
	LCD_Write_BufferPixel(LCD_PIXEL_SET, xc-y, yc+x);
}

// Hasonlóan körhöz, általános vonal rajzolásához létező megoldást használok, mert a saját nem működött jól

void LCD_Draw_Line(int x0, int y0, int x1, int y1) {
	int dx = fabsf(x1 - x0), sx = x0 < x1 ? 1 : -1;
	int dy = -fabsf(y1 - y0), sy = y0 < y1 ? 1 : -1;
	int err = dx + dy, e2; /* error value e_xy */

	for (;;) { /* loop */
		LCD_Write_BufferPixel(LCD_PIXEL_SET,x0, y0);
		if (x0 == x1 && y0 == y1)
			break;
		e2 = 2 * err;
		if (e2 >= dy) {
			err += dy;
			x0 += sx;
		} /* e_xy+e_x > 0 */
		if (e2 <= dx) {
			err += dx;
			y0 += sy;
		} /* e_xy+e_y < 0 */
	}
}

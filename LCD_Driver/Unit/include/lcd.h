/*
 * lcd.h
 *
 *  Created on: Apr 12, 2022
 *      Author: kgerg
 */


#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>
#include "LCD_HWI.h"

// Defines

#define LCD_COMMAND_DISPLAY_ON 0x3F
#define LCD_COMMAND_DISPLAY_OFF 0x3E
#define LCD_PIXEL_SET 1
#define LCD_PIXEL_RESET 0
#define LCD_PAGE_NUMBER 8
#define LCD_SETYADDRESS 0x40
#define LCD_SETPAGE 0xB8
#define LCD_DISPLAY_START_LINE 0xC0
#define LCD_HEIGHT 64
#define LCD_WIDTH 128


//Public functions

void LCD_Init();
void LCD_Fill_Display(uint8_t value); 								// A Page-kben található 8 bites részeket tölti fel a megadott értékkel
void LCD_Fill_Buffer(uint8_t value); 								// Hasonló mint Fill_Display, de a buffer-t tölti fel
void LCD_Invalidate(); 												// Buffer kiírása a kijelzőre
void LCD_Write_BufferPixel(uint8_t pixel, int16_t x,int16_t y); 	// Pixel írása a bufferben

void LCD_Data_Latch(); 												// Adatvonalakon lévő adat latchelése

void LCD_Write(uint8_t value, LCD_HWI_CS_Lines_State CSState,LCD_HWI_Instruction_Data_State DIState); // Általános kiíró függvény
void LCD_Draw_Char(char c,int16_t x,int16_t y); 					// Karakter rajzolása bufferbe
void LCD_Draw_String(char *string,int16_t x,int16_t y); 			// Sztring rajzolása bufferbe
void LCD_Draw_Circle(int16_t xc,int16_t yc,int16_t r); 				// Kör rajzolása bufferbe
void LCD__DrawCircle(int16_t xc, int16_t yc, int16_t x, int16_t y); // segédfüggvény körrajzoláshoz
void LCD_Draw_Horizontal_Line(int16_t xc, int16_t yc,int16_t l); 	// Horizontális vonal rajzolása bufferbe
void LCD_Draw_Line(int x0, int y0, int x1, int y1); 				// Általános vonal rajzolása bufferbe

#endif /* INC_LCD_H_ */

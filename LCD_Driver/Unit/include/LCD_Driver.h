/**
 * @file LCD_Driver.h
 * @brief TODO
 * @date 2022-11-27-23:43:26
*/
#ifndef LCD_Driver_H
#define LCD_Driver_H

/* Includes ------------------------------------------------------------------*/

#include <stdint.h>


/* Type definitions ----------------------------------------------------------*/


/* Defines -------------------------------------------------------------------*/

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

/* Global variables ----------------------------------------------------------*/


/* Function declarations -----------------------------------------------------*/

void LCD_Init();
void LCD_Fill_Display(uint8_t value); 								// A Page-kben található 8 bites részeket tölti fel a megadott értékkel
void LCD_Fill_Buffer(uint8_t value); 								// Hasonló mint Fill_Display, de a buffer-t tölti fel
void LCD_Invalidate(); 												// Buffer kiírása a kijelzőre
void LCD_Write_BufferPixel(uint8_t pixel, int16_t x,int16_t y); 	// Pixel írása a bufferben



#endif /* LCD_Driver_H */
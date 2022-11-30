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


#define LCD_PIXEL_SET 1
#define LCD_PIXEL_RESET 0
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
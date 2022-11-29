/**
 * @file Graphics.h
 * @brief TODO
 * @date 2022-11-27-17:32:20
*/
#ifndef Graphics_H
#define Graphics_H

/* Includes ------------------------------------------------------------------*/

#include <stdint.h>

/* Type definitions ----------------------------------------------------------*/


/* Defines -------------------------------------------------------------------*/


/* Global variables ----------------------------------------------------------*/


/* Function declarations -----------------------------------------------------*/

void Graphics_Character(char c,int16_t x,int16_t y); 				// Karakter rajzolása bufferbe
void Graphics_String(char *string,int16_t x,int16_t y); 			// Sztring rajzolása bufferbe
void Graphics_Circle(int16_t xc,int16_t yc,int16_t r); 				// Kör rajzolása bufferbe
void Graphics_Line(int x0, int y0, int x1, int y1); 				// Általános vonal rajzolása bufferbe

#endif /* Graphics_H */
#ifndef STUB_H
#define STUB_H
#include "types.h"
void TEST_CALL_LCD_Init();
void TEST_CALL_LCD_Fill_Display(uint8_t value);
void TEST_CALL_LCD_Fill_Buffer(uint8_t value);
void TEST_CALL_LCD_Invalidate();
void TEST_CALL_LCD_Write_BufferPixel(uint8_t pixel, int16_t x, int16_t y);
#endif /* STUB_H */
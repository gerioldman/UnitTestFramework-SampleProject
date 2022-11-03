#ifndef STUB_H
#define STUB_H
#include "types.h"
void TEST_CALL_LCD_Init();
void TEST_CALL_LCD_Fill_Display(uint8_t value);
void TEST_CALL_LCD_Fill_Buffer(uint8_t value);
void TEST_CALL_LCD_Invalidate();
void TEST_CALL_LCD_Write_BufferPixel(uint8_t pixel, int16_t x, int16_t y);
void TEST_CALL_LCD_Data_Latch();
void TEST_CALL_LCD_SetRWLine(LCDRWState state);
void TEST_CALL_LCD_Enable(LCDEnableState enable);
void TEST_CALL_LCD_SetDataLines(uint8_t value);
HAL_StatusTypeDef TEST_CALL_LCD_SetCSLines(LCDCSLinesState state);
void TEST_CALL_LCD_SetDILine(uint8_t state);
void TEST_CALL_LCD_Delay(uint32_t us);
void TEST_CALL_LCD_Write(uint8_t value, LCDCSLinesState CSState, LCDInstructionDataState DIState);
void TEST_CALL_LCD_Draw_Char(char c, int16_t x, int16_t y);
void TEST_CALL_LCD_Draw_String(char *string, int16_t x, int16_t y);
void TEST_CALL_LCD_Draw_Circle(int16_t xc, int16_t yc, int16_t r);
void TEST_CALL_LCD__DrawCircle(int16_t xc, int16_t yc, int16_t x, int16_t y);
void TEST_CALL_LCD_Draw_Horizontal_Line(int16_t xc, int16_t yc, int16_t l);
void TEST_CALL_LCD_Draw_Line(int x0, int y0, int x1, int y1);
#endif /* STUB_H */
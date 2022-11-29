/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
void Graphics_Character(char c, int16_t x, int16_t y)
{
  TEST_STUB.Graphics_Character.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Graphics_Character";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Graphics_Character.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.Graphics_Character.c = c;
      TEST_STUB.Graphics_Character.x = x;
      TEST_STUB.Graphics_Character.y = y;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Graphics_Character.redirectFuncPtr(c, x, y);
      break;

    default:
      break;

  }

}

void LCD_Init()
{
  TEST_STUB.LCD_Init.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_Init";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_Init.stub_option)
  {
    case STUB_OPTION_VALUE:
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_Init.redirectFuncPtr();
      break;

    default:
      break;

  }

}

void LCD_Fill_Display(uint8_t value)
{
  TEST_STUB.LCD_Fill_Display.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_Fill_Display";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_Fill_Display.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.LCD_Fill_Display.value = value;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_Fill_Display.redirectFuncPtr(value);
      break;

    default:
      break;

  }

}

void LCD_Fill_Buffer(uint8_t value)
{
  TEST_STUB.LCD_Fill_Buffer.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_Fill_Buffer";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_Fill_Buffer.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.LCD_Fill_Buffer.value = value;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_Fill_Buffer.redirectFuncPtr(value);
      break;

    default:
      break;

  }

}

void LCD_Invalidate()
{
  TEST_STUB.LCD_Invalidate.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_Invalidate";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_Invalidate.stub_option)
  {
    case STUB_OPTION_VALUE:
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_Invalidate.redirectFuncPtr();
      break;

    default:
      break;

  }

}

void LCD_Write_BufferPixel(uint8_t pixel, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Write_BufferPixel.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_Write_BufferPixel";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_Write_BufferPixel.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.LCD_Write_BufferPixel.pixel = pixel;
      TEST_STUB.LCD_Write_BufferPixel.x = x;
      TEST_STUB.LCD_Write_BufferPixel.y = y;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_Write_BufferPixel.redirectFuncPtr(pixel, x, y);
      break;

    default:
      break;

  }

}

void TEST_CALL_Graphics_String(char *string, int16_t x, int16_t y)
{
  TEST_STUB.Graphics_String.callcount++;
  Graphics_String(string, x, y);
}

void TEST_CALL_Graphics_Circle(int16_t xc, int16_t yc, int16_t r)
{
  TEST_STUB.Graphics_Circle.callcount++;
  Graphics_Circle(xc, yc, r);
}

void TEST_CALL_Graphics_Horizontal_Line(int16_t xc, int16_t yc, int16_t l)
{
  TEST_STUB.Graphics_Horizontal_Line.callcount++;
  Graphics_Horizontal_Line(xc, yc, l);
}

void TEST_CALL_Graphics_Line(int x0, int y0, int x1, int y1)
{
  TEST_STUB.Graphics_Line.callcount++;
  Graphics_Line(x0, y0, x1, y1);
}


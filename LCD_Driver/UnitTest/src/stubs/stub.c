/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
LCD_HWI_Status LCD_HWI_SetRWLine(LCD_HWI_RW_State state)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetRWLine.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetRWLine";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetRWLine.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetRWLine.returnValue;
      TEST_STUB.LCD_HWI_SetRWLine.state = state;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetRWLine.redirectFuncPtr(state);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetDataLines(uint8_t value)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetDataLines.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetDataLines";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetDataLines.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetDataLines.returnValue;
      TEST_STUB.LCD_HWI_SetDataLines.value = value;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetDataLines.redirectFuncPtr(value);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetCSLines(LCD_HWI_CS_Lines_State state)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetCSLines.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetCSLines";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetCSLines.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetCSLines.returnValue;
      TEST_STUB.LCD_HWI_SetCSLines.state = state;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetCSLines.redirectFuncPtr(state);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetDILine(uint8_t state)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetDILine.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetDILine";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetDILine.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetDILine.returnValue;
      TEST_STUB.LCD_HWI_SetDILine.state = state;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetDILine.redirectFuncPtr(state);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetEnable(LCD_HWI_Enable_State enable)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetEnable.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetEnable";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetEnable.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetEnable.returnValue;
      TEST_STUB.LCD_HWI_SetEnable.enable = enable;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetEnable.redirectFuncPtr(enable);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetLatch(LCD_HWI_Latch_State enable)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetLatch.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetLatch";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetLatch.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetLatch.returnValue;
      TEST_STUB.LCD_HWI_SetLatch.enable = enable;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetLatch.redirectFuncPtr(enable);
      break;

    default:
      break;

  }

  return returnValue;
}

LCD_HWI_Status LCD_HWI_SetReset(LCD_HWI_RST_State state)
{
  LCD_HWI_Status returnValue = {0};
  TEST_STUB.LCD_HWI_SetReset.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_SetReset";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_SetReset.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.LCD_HWI_SetReset.returnValue;
      TEST_STUB.LCD_HWI_SetReset.state = state;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.LCD_HWI_SetReset.redirectFuncPtr(state);
      break;

    default:
      break;

  }

  return returnValue;
}

void LCD_HWI_Delay(uint32_t us)
{
  TEST_STUB.LCD_HWI_Delay.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "LCD_HWI_Delay";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.LCD_HWI_Delay.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.LCD_HWI_Delay.us = us;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.LCD_HWI_Delay.redirectFuncPtr(us);
      break;

    default:
      break;

  }

}

void TEST_CALL_LCD_Init()
{
  TEST_STUB.LCD_Init.callcount++;
  LCD_Init();
}

void TEST_CALL_LCD_Fill_Display(uint8_t value)
{
  TEST_STUB.LCD_Fill_Display.callcount++;
  LCD_Fill_Display(value);
}

void TEST_CALL_LCD_Fill_Buffer(uint8_t value)
{
  TEST_STUB.LCD_Fill_Buffer.callcount++;
  LCD_Fill_Buffer(value);
}

void TEST_CALL_LCD_Invalidate()
{
  TEST_STUB.LCD_Invalidate.callcount++;
  LCD_Invalidate();
}

void TEST_CALL_LCD_Write_BufferPixel(uint8_t pixel, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Write_BufferPixel.callcount++;
  LCD_Write_BufferPixel(pixel, x, y);
}

void TEST_CALL_LCD_Data_Latch()
{
  TEST_STUB.LCD_Data_Latch.callcount++;
  LCD_Data_Latch();
}

void TEST_CALL_LCD_Write(uint8_t value, LCD_HWI_CS_Lines_State CSState, LCD_HWI_Instruction_Data_State DIState)
{
  TEST_STUB.LCD_Write.callcount++;
  LCD_Write(value, CSState, DIState);
}

void TEST_CALL_LCD_Draw_Char(char c, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Draw_Char.callcount++;
  LCD_Draw_Char(c, x, y);
}

void TEST_CALL_LCD_Draw_String(char *string, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Draw_String.callcount++;
  LCD_Draw_String(string, x, y);
}

void TEST_CALL_LCD_Draw_Circle(int16_t xc, int16_t yc, int16_t r)
{
  TEST_STUB.LCD_Draw_Circle.callcount++;
  LCD_Draw_Circle(xc, yc, r);
}

void TEST_CALL_LCD__DrawCircle(int16_t xc, int16_t yc, int16_t x, int16_t y)
{
  TEST_STUB.LCD__DrawCircle.callcount++;
  LCD__DrawCircle(xc, yc, x, y);
}

void TEST_CALL_LCD_Draw_Horizontal_Line(int16_t xc, int16_t yc, int16_t l)
{
  TEST_STUB.LCD_Draw_Horizontal_Line.callcount++;
  LCD_Draw_Horizontal_Line(xc, yc, l);
}

void TEST_CALL_LCD_Draw_Line(int x0, int y0, int x1, int y1)
{
  TEST_STUB.LCD_Draw_Line.callcount++;
  LCD_Draw_Line(x0, y0, x1, y1);
}


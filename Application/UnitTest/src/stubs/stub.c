/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
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

void Graphics_String(char *string, int16_t x, int16_t y)
{
  TEST_STUB.Graphics_String.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Graphics_String";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Graphics_String.stub_option)
  {
    case STUB_OPTION_VALUE:
      if (TEST_STUB.Graphics_String.string.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *string = TEST_STUB.Graphics_String.string.value;
    }
    else
    {
      if (TEST_STUB.Graphics_String.string.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.Graphics_String.string.value = *string;
      }
    }
      TEST_STUB.Graphics_String.x = x;
      TEST_STUB.Graphics_String.y = y;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Graphics_String.redirectFuncPtr(string, x, y);
      break;

    default:
      break;

  }

}

void Graphics_Circle(int16_t xc, int16_t yc, int16_t r)
{
  TEST_STUB.Graphics_Circle.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Graphics_Circle";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Graphics_Circle.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.Graphics_Circle.xc = xc;
      TEST_STUB.Graphics_Circle.yc = yc;
      TEST_STUB.Graphics_Circle.r = r;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Graphics_Circle.redirectFuncPtr(xc, yc, r);
      break;

    default:
      break;

  }

}

void Graphics_Horizontal_Line(int16_t xc, int16_t yc, int16_t l)
{
  TEST_STUB.Graphics_Horizontal_Line.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Graphics_Horizontal_Line";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Graphics_Horizontal_Line.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.Graphics_Horizontal_Line.xc = xc;
      TEST_STUB.Graphics_Horizontal_Line.yc = yc;
      TEST_STUB.Graphics_Horizontal_Line.l = l;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Graphics_Horizontal_Line.redirectFuncPtr(xc, yc, l);
      break;

    default:
      break;

  }

}

void Graphics_Line(int x0, int y0, int x1, int y1)
{
  TEST_STUB.Graphics_Line.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Graphics_Line";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Graphics_Line.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.Graphics_Line.x0 = x0;
      TEST_STUB.Graphics_Line.y0 = y0;
      TEST_STUB.Graphics_Line.x1 = x1;
      TEST_STUB.Graphics_Line.y1 = y1;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Graphics_Line.redirectFuncPtr(x0, y0, x1, y1);
      break;

    default:
      break;

  }

}

void Complementary_Filter_InitFilter()
{
  TEST_STUB.Complementary_Filter_InitFilter.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Complementary_Filter_InitFilter";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Complementary_Filter_InitFilter.stub_option)
  {
    case STUB_OPTION_VALUE:
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Complementary_Filter_InitFilter.redirectFuncPtr();
      break;

    default:
      break;

  }

}

void Complementary_Filter_UpdateFilter(const float accelerometer[3], const float gyroscope[3])
{
  TEST_STUB.Complementary_Filter_UpdateFilter.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Complementary_Filter_UpdateFilter";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Complementary_Filter_UpdateFilter.stub_option)
  {
    case STUB_OPTION_VALUE:
      for (int i = 0; i < 3; ++i)
    {
      TEST_STUB.Complementary_Filter_UpdateFilter.accelerometer[i] = accelerometer[i];
    }

      for (int i = 0; i < 3; ++i)
    {
      TEST_STUB.Complementary_Filter_UpdateFilter.gyroscope[i] = gyroscope[i];
    }

      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.Complementary_Filter_UpdateFilter.redirectFuncPtr(accelerometer, gyroscope);
      break;

    default:
      break;

  }

}

Orientation_Data_t Complementary_Filter_GetOrientationData()
{
  Orientation_Data_t returnValue = {0};
  TEST_STUB.Complementary_Filter_GetOrientationData.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "Complementary_Filter_GetOrientationData";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.Complementary_Filter_GetOrientationData.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.Complementary_Filter_GetOrientationData.returnValue;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.Complementary_Filter_GetOrientationData.redirectFuncPtr();
      break;

    default:
      break;

  }

  return returnValue;
}

void IMU_Handler_Init()
{
  TEST_STUB.IMU_Handler_Init.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "IMU_Handler_Init";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.IMU_Handler_Init.stub_option)
  {
    case STUB_OPTION_VALUE:
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.IMU_Handler_Init.redirectFuncPtr();
      break;

    default:
      break;

  }

}

void IMU_Handler_HandleInterrupt()
{
  TEST_STUB.IMU_Handler_HandleInterrupt.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "IMU_Handler_HandleInterrupt";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.IMU_Handler_HandleInterrupt.stub_option)
  {
    case STUB_OPTION_VALUE:
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.IMU_Handler_HandleInterrupt.redirectFuncPtr();
      break;

    default:
      break;

  }

}

IMU_Handler_Data IMU_Handler_GetData()
{
  IMU_Handler_Data returnValue = {0};
  TEST_STUB.IMU_Handler_GetData.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "IMU_Handler_GetData";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.IMU_Handler_GetData.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.IMU_Handler_GetData.returnValue;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.IMU_Handler_GetData.redirectFuncPtr();
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.platform_write.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "platform_write";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.platform_write.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.platform_write.returnValue;
      if (TEST_STUB.platform_write.handle.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *handle = TEST_STUB.platform_write.handle.value;
    }
    else
    {
      if (TEST_STUB.platform_write.handle.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.platform_write.handle.value = *handle;
      }
    }
      TEST_STUB.platform_write.reg = reg;
      TEST_STUB.platform_write.bufp = *bufp;
      TEST_STUB.platform_write.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.platform_write.redirectFuncPtr(handle, reg, bufp, len);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.platform_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "platform_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.platform_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.platform_read.returnValue;
      if (TEST_STUB.platform_read.handle.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *handle = TEST_STUB.platform_read.handle.value;
    }
    else
    {
      if (TEST_STUB.platform_read.handle.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.platform_read.handle.value = *handle;
      }
    }
      TEST_STUB.platform_read.reg = reg;
      if (TEST_STUB.platform_read.bufp.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *bufp = TEST_STUB.platform_read.bufp.value;
    }
    else
    {
      if (TEST_STUB.platform_read.bufp.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.platform_read.bufp.value = *bufp;
      }
    }
      TEST_STUB.platform_read.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.platform_read.redirectFuncPtr(handle, reg, bufp, len);
      break;

    default:
      break;

  }

  return returnValue;
}

void IMU_HWI_Delay(uint32_t ms)
{
  TEST_STUB.IMU_HWI_Delay.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "IMU_HWI_Delay";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.IMU_HWI_Delay.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.IMU_HWI_Delay.ms = ms;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.IMU_HWI_Delay.redirectFuncPtr(ms);
      break;

    default:
      break;

  }

}

void TEST_CALL_Application_ToggleUI()
{
  TEST_STUB.Application_ToggleUI.callcount++;
  Application_ToggleUI();
}

void TEST_CALL_Application_Refresh()
{
  TEST_STUB.Application_Refresh.callcount++;
  Application_Refresh();
}


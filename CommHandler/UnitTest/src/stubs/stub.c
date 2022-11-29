/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
uint32_t CRC_HWI_Calculate(const uint32_t pBuffer[], uint32_t BufferLength)
{
  uint32_t returnValue = {0};
  TEST_STUB.CRC_HWI_Calculate.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "CRC_HWI_Calculate";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.CRC_HWI_Calculate.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.CRC_HWI_Calculate.returnValue;
      for (int i = 0; i < 1; ++i)
    {
      TEST_STUB.CRC_HWI_Calculate.pBuffer[i] = pBuffer[i];
    }

      TEST_STUB.CRC_HWI_Calculate.BufferLength = BufferLength;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.CRC_HWI_Calculate.redirectFuncPtr(pBuffer, BufferLength);
      break;

    default:
      break;

  }

  return returnValue;
}

UART_HWI_StatusTypedef UART_HWI_Transmit_IT(const uint8_t pBuffer[], uint16_t BufferLength)
{
  UART_HWI_StatusTypedef returnValue = {0};
  TEST_STUB.UART_HWI_Transmit_IT.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "UART_HWI_Transmit_IT";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.UART_HWI_Transmit_IT.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.UART_HWI_Transmit_IT.returnValue;
      for (int i = 0; i < 1; ++i)
    {
      TEST_STUB.UART_HWI_Transmit_IT.pBuffer[i] = pBuffer[i];
    }

      TEST_STUB.UART_HWI_Transmit_IT.BufferLength = BufferLength;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.UART_HWI_Transmit_IT.redirectFuncPtr(pBuffer, BufferLength);
      break;

    default:
      break;

  }

  return returnValue;
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

void TEST_CALL_CommHandler_HandleCommEvent(uint8_t receivedByte)
{
  TEST_STUB.CommHandler_HandleCommEvent.callcount++;
  CommHandler_HandleCommEvent(receivedByte);
}


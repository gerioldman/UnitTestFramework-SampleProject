#ifndef TYPES_H
#define TYPES_H

#include "math.h"
#include "Complementary_Filter.h"
#include "stdint.h"
#include "CRC_HWI.h"
#include "IMU_Handler.h"
#include "CommHandler.h"
#include "UART_HWI.h"
typedef enum 
    {
      STUB_OPTION_VALUE,
      STUB_OPTION_REDIRECT
    } stub_option_t;
typedef enum 
    {
      STUB_OPTION_TRACE_OFF,
      STUB_OPTION_TRACE_ON
    } stub_trace_option_t;
typedef enum 
    {
      STUB_OPTION_PARG_COPY_FROM,
      STUB_OPTION_PARG_COPY_TO
    } stub_pArg_option_t;
typedef struct TEST_STUB_Trace
    {
      stub_trace_option_t trace_enabled;
      char **trace_buffer;
      unsigned long trace_buffer_length;
      unsigned long trace_buffer_index;
    } TEST_STUB_Trace;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint8_t receivedByte;
      void (*redirectFuncPtr)(uint8_t receivedByte);
    } TEST_STUB_CommHandler_HandleCommEvent_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint32_t returnValue;
      uint32_t pBuffer[1];
      uint32_t BufferLength;
      uint32_t (*redirectFuncPtr)(const uint32_t pBuffer[], uint32_t BufferLength);
    } TEST_STUB_CRC_HWI_Calculate_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      UART_HWI_StatusTypedef returnValue;
      uint8_t pBuffer[1];
      uint16_t BufferLength;
      UART_HWI_StatusTypedef (*redirectFuncPtr)(const uint8_t pBuffer[], uint16_t BufferLength);
    } TEST_STUB_UART_HWI_Transmit_IT_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_Complementary_Filter_InitFilter_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float accelerometer[3];
      float gyroscope[3];
      void (*redirectFuncPtr)(const float accelerometer[3], const float gyroscope[3]);
    } TEST_STUB_Complementary_Filter_UpdateFilter_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      Orientation_Data_t returnValue;
      Orientation_Data_t (*redirectFuncPtr)();
    } TEST_STUB_Complementary_Filter_GetOrientationData_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_Init_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_HandleInterrupt_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      IMU_Handler_Data returnValue;
      IMU_Handler_Data (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_GetData_TYPE;
typedef struct 
    {
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_CommHandler_HandleCommEvent_TYPE CommHandler_HandleCommEvent;
      TEST_STUB_CRC_HWI_Calculate_TYPE CRC_HWI_Calculate;
      TEST_STUB_UART_HWI_Transmit_IT_TYPE UART_HWI_Transmit_IT;
      TEST_STUB_Complementary_Filter_InitFilter_TYPE Complementary_Filter_InitFilter;
      TEST_STUB_Complementary_Filter_UpdateFilter_TYPE Complementary_Filter_UpdateFilter;
      TEST_STUB_Complementary_Filter_GetOrientationData_TYPE Complementary_Filter_GetOrientationData;
      TEST_STUB_IMU_Handler_Init_TYPE IMU_Handler_Init;
      TEST_STUB_IMU_Handler_HandleInterrupt_TYPE IMU_Handler_HandleInterrupt;
      TEST_STUB_IMU_Handler_GetData_TYPE IMU_Handler_GetData;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
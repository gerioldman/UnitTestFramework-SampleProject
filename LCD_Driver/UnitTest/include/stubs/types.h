#ifndef TYPES_H
#define TYPES_H

#include "math.h"
#include "LCD_HWI.h"
#include "stdint.h"
#include "LCD_Driver.h"
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
      char (*trace_buffer)[101];
      unsigned long trace_buffer_length;
      unsigned long trace_buffer_index;
    } TEST_STUB_Trace;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_LCD_Init_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint8_t value;
      void (*redirectFuncPtr)(uint8_t value);
    } TEST_STUB_LCD_Fill_Display_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint8_t value;
      void (*redirectFuncPtr)(uint8_t value);
    } TEST_STUB_LCD_Fill_Buffer_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_LCD_Invalidate_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint8_t pixel;
      int16_t x;
      int16_t y;
      void (*redirectFuncPtr)(uint8_t pixel, int16_t x, int16_t y);
    } TEST_STUB_LCD_Write_BufferPixel_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_RW_State state;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_RW_State state);
    } TEST_STUB_LCD_HWI_SetRWLine_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      uint8_t value;
      LCD_HWI_Status (*redirectFuncPtr)(uint8_t value);
    } TEST_STUB_LCD_HWI_SetDataLines_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_CS_Lines_State state;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_CS_Lines_State state);
    } TEST_STUB_LCD_HWI_SetCSLines_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_Instruction_Data_State state;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_Instruction_Data_State state);
    } TEST_STUB_LCD_HWI_SetDILine_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_Enable_State enable;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_Enable_State enable);
    } TEST_STUB_LCD_HWI_SetEnable_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_Latch_State enable;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_Latch_State enable);
    } TEST_STUB_LCD_HWI_SetLatch_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      LCD_HWI_Status returnValue;
      LCD_HWI_RST_State state;
      LCD_HWI_Status (*redirectFuncPtr)(LCD_HWI_RST_State state);
    } TEST_STUB_LCD_HWI_SetReset_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint32_t us;
      void (*redirectFuncPtr)(uint32_t us);
    } TEST_STUB_LCD_HWI_Delay_TYPE;
typedef struct 
    {
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_LCD_Init_TYPE LCD_Init;
      TEST_STUB_LCD_Fill_Display_TYPE LCD_Fill_Display;
      TEST_STUB_LCD_Fill_Buffer_TYPE LCD_Fill_Buffer;
      TEST_STUB_LCD_Invalidate_TYPE LCD_Invalidate;
      TEST_STUB_LCD_Write_BufferPixel_TYPE LCD_Write_BufferPixel;
      TEST_STUB_LCD_HWI_SetRWLine_TYPE LCD_HWI_SetRWLine;
      TEST_STUB_LCD_HWI_SetDataLines_TYPE LCD_HWI_SetDataLines;
      TEST_STUB_LCD_HWI_SetCSLines_TYPE LCD_HWI_SetCSLines;
      TEST_STUB_LCD_HWI_SetDILine_TYPE LCD_HWI_SetDILine;
      TEST_STUB_LCD_HWI_SetEnable_TYPE LCD_HWI_SetEnable;
      TEST_STUB_LCD_HWI_SetLatch_TYPE LCD_HWI_SetLatch;
      TEST_STUB_LCD_HWI_SetReset_TYPE LCD_HWI_SetReset;
      TEST_STUB_LCD_HWI_Delay_TYPE LCD_HWI_Delay;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
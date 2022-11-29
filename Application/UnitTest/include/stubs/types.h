#ifndef TYPES_H
#define TYPES_H

#include "math.h"
#include "LCD_Driver.h"
#include "IMU_HWI.h"
#include "Graphics.h"
#include "Application.h"
#include "Complementary_Filter.h"
#include "IMU_Handler.h"
#include "stdio.h"
#include "stdint.h"
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
      void (*redirectFuncPtr)();
    } TEST_STUB_Application_ToggleUI_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_Application_Refresh_TYPE;
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
      char c;
      int16_t x;
      int16_t y;
      void (*redirectFuncPtr)(char c, int16_t x, int16_t y);
    } TEST_STUB_Graphics_Character_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      struct 
      {
        char value;
        stub_pArg_option_t stub_pArg_option;
      } string;
      int16_t x;
      int16_t y;
      void (*redirectFuncPtr)(char *string, int16_t x, int16_t y);
    } TEST_STUB_Graphics_String_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int16_t xc;
      int16_t yc;
      int16_t r;
      void (*redirectFuncPtr)(int16_t xc, int16_t yc, int16_t r);
    } TEST_STUB_Graphics_Circle_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int16_t xc;
      int16_t yc;
      int16_t l;
      void (*redirectFuncPtr)(int16_t xc, int16_t yc, int16_t l);
    } TEST_STUB_Graphics_Horizontal_Line_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int x0;
      int y0;
      int x1;
      int y1;
      void (*redirectFuncPtr)(int x0, int y0, int x1, int y1);
    } TEST_STUB_Graphics_Line_TYPE;
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
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      void *handle;
      uint8_t reg;
      uint8_t bufp;
      uint16_t len;
      int32_t (*redirectFuncPtr)(void *handle, uint8_t reg, const uint8_t *bufp, uint16_t len);
    } TEST_STUB_platform_write_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      void *handle;
      uint8_t reg;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } bufp;
      uint16_t len;
      int32_t (*redirectFuncPtr)(void *handle, uint8_t reg, uint8_t *bufp, uint16_t len);
    } TEST_STUB_platform_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint32_t ms;
      void (*redirectFuncPtr)(uint32_t ms);
    } TEST_STUB_IMU_HWI_Delay_TYPE;
typedef struct 
    {
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_Application_ToggleUI_TYPE Application_ToggleUI;
      TEST_STUB_Application_Refresh_TYPE Application_Refresh;
      TEST_STUB_LCD_Init_TYPE LCD_Init;
      TEST_STUB_LCD_Fill_Display_TYPE LCD_Fill_Display;
      TEST_STUB_LCD_Fill_Buffer_TYPE LCD_Fill_Buffer;
      TEST_STUB_LCD_Invalidate_TYPE LCD_Invalidate;
      TEST_STUB_LCD_Write_BufferPixel_TYPE LCD_Write_BufferPixel;
      TEST_STUB_Graphics_Character_TYPE Graphics_Character;
      TEST_STUB_Graphics_String_TYPE Graphics_String;
      TEST_STUB_Graphics_Circle_TYPE Graphics_Circle;
      TEST_STUB_Graphics_Horizontal_Line_TYPE Graphics_Horizontal_Line;
      TEST_STUB_Graphics_Line_TYPE Graphics_Line;
      TEST_STUB_Complementary_Filter_InitFilter_TYPE Complementary_Filter_InitFilter;
      TEST_STUB_Complementary_Filter_UpdateFilter_TYPE Complementary_Filter_UpdateFilter;
      TEST_STUB_Complementary_Filter_GetOrientationData_TYPE Complementary_Filter_GetOrientationData;
      TEST_STUB_IMU_Handler_Init_TYPE IMU_Handler_Init;
      TEST_STUB_IMU_Handler_HandleInterrupt_TYPE IMU_Handler_HandleInterrupt;
      TEST_STUB_IMU_Handler_GetData_TYPE IMU_Handler_GetData;
      TEST_STUB_platform_write_TYPE platform_write;
      TEST_STUB_platform_read_TYPE platform_read;
      TEST_STUB_IMU_HWI_Delay_TYPE IMU_HWI_Delay;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
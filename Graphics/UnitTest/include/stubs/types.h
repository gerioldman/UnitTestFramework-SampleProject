#ifndef TYPES_H
#define TYPES_H

#include "math.h"
#include "stdint.h"
#include "Graphics.h"
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
      char **trace_buffer;
      unsigned long trace_buffer_length;
      unsigned long trace_buffer_index;
    } TEST_STUB_Trace;
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
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_Graphics_Character_TYPE Graphics_Character;
      TEST_STUB_Graphics_String_TYPE Graphics_String;
      TEST_STUB_Graphics_Circle_TYPE Graphics_Circle;
      TEST_STUB_Graphics_Horizontal_Line_TYPE Graphics_Horizontal_Line;
      TEST_STUB_Graphics_Line_TYPE Graphics_Line;
      TEST_STUB_LCD_Init_TYPE LCD_Init;
      TEST_STUB_LCD_Fill_Display_TYPE LCD_Fill_Display;
      TEST_STUB_LCD_Fill_Buffer_TYPE LCD_Fill_Buffer;
      TEST_STUB_LCD_Invalidate_TYPE LCD_Invalidate;
      TEST_STUB_LCD_Write_BufferPixel_TYPE LCD_Write_BufferPixel;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
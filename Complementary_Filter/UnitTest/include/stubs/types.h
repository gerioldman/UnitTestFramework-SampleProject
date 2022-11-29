#ifndef TYPES_H
#define TYPES_H

#include "Complementary_Filter.h"
#include "math.h"
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
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_Complementary_Filter_InitFilter_TYPE Complementary_Filter_InitFilter;
      TEST_STUB_Complementary_Filter_UpdateFilter_TYPE Complementary_Filter_UpdateFilter;
      TEST_STUB_Complementary_Filter_GetOrientationData_TYPE Complementary_Filter_GetOrientationData;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
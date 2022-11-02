#ifndef TYPES_H
#define TYPES_H

#include "ADC_Driver.h"
typedef enum 
{
  STUB_OPTION_VALUE,
  STUB_OPTION_REDIRECT
} stub_option_t;
typedef enum 
{
  STUB_OPTION_PARG_COPY_FROM,
  STUB_OPTION_PARG_COPY_TO
} stub_pArg_option_t;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_DoNothing_TYPE;
typedef struct 
{
  TEST_STUB_DoNothing_TYPE DoNothing;
} TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */
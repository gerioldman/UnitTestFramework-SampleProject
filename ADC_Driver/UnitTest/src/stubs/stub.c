/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
void TEST_CALL_DoNothing(void)
{
  TEST_STUB.DoNothing.callcount++;
  DoNothing();
}


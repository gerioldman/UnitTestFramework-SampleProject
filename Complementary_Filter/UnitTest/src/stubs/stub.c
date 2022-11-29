/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
void TEST_CALL_Complementary_Filter_InitFilter()
{
  TEST_STUB.Complementary_Filter_InitFilter.callcount++;
  Complementary_Filter_InitFilter();
}

void TEST_CALL_Complementary_Filter_UpdateFilter(const float accelerometer[3], const float gyroscope[3])
{
  TEST_STUB.Complementary_Filter_UpdateFilter.callcount++;
  Complementary_Filter_UpdateFilter(accelerometer, gyroscope);
}

Orientation_Data_t TEST_CALL_Complementary_Filter_GetOrientationData()
{
  TEST_STUB.Complementary_Filter_GetOrientationData.callcount++;
  return Complementary_Filter_GetOrientationData();
}


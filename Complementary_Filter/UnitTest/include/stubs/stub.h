#ifndef STUB_H
#define STUB_H
#include "types.h"
void TEST_CALL_Complementary_Filter_InitFilter();
void TEST_CALL_Complementary_Filter_UpdateFilter(const float accelerometer[3], const float gyroscope[3]);
Orientation_Data_t TEST_CALL_Complementary_Filter_GetOrientationData();
#endif /* STUB_H */
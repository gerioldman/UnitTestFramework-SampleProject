#ifndef STUB_H
#define STUB_H
#include "types.h"
void TEST_CALL_IMU_Handler_Init();
void TEST_CALL_IMU_Handler_HandleInterrupt();
IMU_Handler_Data TEST_CALL_IMU_Handler_GetData();
#endif /* STUB_H */
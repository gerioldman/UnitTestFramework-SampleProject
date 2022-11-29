/**
 * @file IMU_HWI.h
 * @brief Defines interface for IMU_Handler to interact with hardware dependant calls
 * @date 2022-11-21-15:40:17
*/

#ifndef IMU_HWI_H
#define IMU_HWI_H

#include <stdint.h>

int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp, uint16_t len);

int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp, uint16_t len);

void IMU_HWI_Delay(uint32_t ms);

#endif
/**
 * @file IMU_Handler.h
 * @brief TODO
 * @date 2022-11-29-00:35:31
*/
#ifndef IMU_Handler_H
#define IMU_Handler_H

/* Includes ------------------------------------------------------------------*/

#include <stdint.h>

/* Type definitions ----------------------------------------------------------*/

typedef struct
{
    int16_t acc[3];
    int16_t gyro[3];
}IMU_Handler_RawData;

typedef struct
{
    float facc[3];
    float fgyro[3];
}IMU_Handler_ConvertedData;

typedef struct
{
    IMU_Handler_RawData rawData;
    IMU_Handler_ConvertedData convertedData;
}IMU_Handler_Data;

/* Defines -------------------------------------------------------------------*/


/* Global variables ----------------------------------------------------------*/


/* Function declarations -----------------------------------------------------*/

void IMU_Handler_Init();

void IMU_Handler_HandleInterrupt();

IMU_Handler_Data IMU_Handler_GetData();



#endif /* IMU_Handler_H */
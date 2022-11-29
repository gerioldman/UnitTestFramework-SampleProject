/**
 * @file Complementary_Filter.h
 * @brief TODO
 * @date 2022-11-28-02:08:18
*/
#ifndef Complementary_Filter_H
#define Complementary_Filter_H

/* Includes ------------------------------------------------------------------*/

#include <math.h>

/* Type definitions ----------------------------------------------------------*/

typedef struct
{
    float phiHat;
    float thetaHat;
}Orientation_Data_t;

/* Defines -------------------------------------------------------------------*/

#define COMP_FILT_ALPHA 0.025f

/* Global variables ----------------------------------------------------------*/


/* Function declarations -----------------------------------------------------*/

void Complementary_Filter_InitFilter();

void Complementary_Filter_UpdateFilter(const float accelerometer[3],const float gyroscope[3]);

Orientation_Data_t Complementary_Filter_GetOrientationData();

#endif /* Complementary_Filter_H */
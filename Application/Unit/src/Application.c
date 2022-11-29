/**
 * @file Application.c
 * @brief TODO
 * @date 2022-11-27-17:32:20
 */
/* Includes ------------------------------------------------------------------*/

#include "Application.h"
#include "LCD_Driver.h"
#include "Graphics.h"
#include "Complementary_Filter.h"
#include "IMU_Handler.h"
#include "IMU_HWI.h"
#include <stdint.h>
#include <stdio.h>

/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

static uint8_t ui_toggle = 1;

void Application_ToggleUI()
{
    if (ui_toggle)
        ui_toggle = 0;
    else
        ui_toggle = 1;
}

void Application_Refresh()
{
    Orientation_Data_t orientation = Complementary_Filter_GetOrientationData();
    float degPhi = orientation.phiHat * 180.0f / M_PI;
    float degTheta = orientation.thetaHat * 180.0f / M_PI;

    if (ui_toggle)
    {
        // Buffer törlése
        LCD_Fill_Buffer(0x0);
        // Marker rajzolása
        Graphics_Line(62, 30, 65, 30);
        Graphics_Line(62, 33, 65, 33);
        Graphics_Line(62, 30, 62, 33);
        Graphics_Line(65, 30, 65, 33);
        Graphics_Line(63, 34, 63, 38);
        Graphics_Line(64, 34, 64, 38);
        Graphics_Line(62, 37, 56, 37);
        Graphics_Line(62, 38, 56, 38);
        Graphics_Line(65, 37, 71, 37);
        Graphics_Line(65, 38, 71, 38);
        Graphics_Line(56, 36, 56, 31);
        Graphics_Line(57, 36, 57, 31);
        Graphics_Line(70, 36, 70, 31);
        Graphics_Line(71, 36, 71, 31);
        Graphics_Line(72, 31, 80, 31);
        Graphics_Line(72, 32, 80, 32);
        Graphics_Line(55, 31, 47, 31);
        Graphics_Line(55, 32, 47, 32);
        // Marker rajzolása
        // Rajzoláshoz phi és theta szögek lokális változóba mentése

        int16_t localPhi = degPhi;
        int16_t localTheta = degTheta;
        // Dölésszögeket reprezentáló vonalak és hozzátartozó szöveg rajzolása
        for (int i = -90; i < 91; i += 15)
        {
            if (i != 0)
            {
                char buffer[4];
                uint8_t length = sprintf(buffer, "%d", -i);
                // Vonal alap poziciója Phi döléssel eltolva
                float_t x0 = 64 - fabsf((float)i) / 2;
                float_t y0 = 32 - localPhi + i;
                float_t x1 = 64 + fabsf((float)i) / 2;
                float_t y1 = 32 - localPhi + i;
                // Vonal forgatása dölésszögnek megfelelően
                float_t x2 = (x0 - 64) * cosf(localTheta * M_PI / 180) - (y0 - 32) * sinf(localTheta * M_PI / 180) + 64;
                float_t y2 = (x0 - 64) * sinf(localTheta * M_PI / 180) + (y0 - 32) * cosf(localTheta * M_PI / 180) + 32;
                float_t x3 = (x1 - 64) * cosf(localTheta * M_PI / 180) - (y1 - 32) * sinf(localTheta * M_PI / 180) + 64;
                float_t y3 = (x1 - 64) * sinf(localTheta * M_PI / 180) + (y1 - 32) * cosf(localTheta * M_PI / 180) + 32;
                // Vonal bufferbe rajzolása
                Graphics_Line(x2, y2, x3, y3);
                // Érték kiírása a vonal két végpontja mellé
                Graphics_String(buffer, x2 - 2 - length * 8, y2);
                Graphics_String(buffer, x3 + 2, y3);
            }
            else
            {
                // Graphics_Line(64-fabsf(i)/2, 32 + localPhi + i, 64+fabsf(i)/2,32 + localPhi + i);
            }
        }
        // kirajolás LCD-re bufferből
        LCD_Invalidate();
    }
    else
    {
        // Mért és feldolgozott adatok megjelenítése az LCD-n
        IMU_Handler_Data data = IMU_Handler_GetData();
        char line0[16], line1[16], line2[16], line3[16], line4[16], line5[16], line6[16], line7[16];
        LCD_Fill_Buffer(0x0);
        snprintf(line0, 16, "XLX:%.3f m/s", data.convertedData.facc[0]);
        snprintf(line1, 16, "XLY:%.3f m/s", data.convertedData.facc[1]);
        snprintf(line2, 16, "XLZ:%.3f m/s", data.convertedData.facc[2]);
        snprintf(line3, 16, "GX:%.3f rad/s", data.convertedData.fgyro[0]);
        snprintf(line4, 16, "GY:%.3f rad/s", data.convertedData.fgyro[1]);
        snprintf(line5, 16, "GZ:%.3f rad/s", data.convertedData.fgyro[2]);
        snprintf(line6, 16, "Phi:%.3fdeg", degPhi);
        snprintf(line7, 16, "Theta:%.3fdeg", degTheta);
        Graphics_String(line0, 0, 0);
        Graphics_String(line1, 0, 8);
        Graphics_String(line2, 0, 16);
        Graphics_String(line3, 0, 24);
        Graphics_String(line4, 0, 32);
        Graphics_String(line5, 0, 40);
        Graphics_String(line6, 0, 48);
        Graphics_String(line7, 0, 56);
        LCD_Invalidate();

        IMU_HWI_Delay(200);
    }
}
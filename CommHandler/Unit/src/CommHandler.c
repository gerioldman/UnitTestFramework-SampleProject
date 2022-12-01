/**
 * @file CommHandler.c
 * @brief TODO
 * @date 2022-11-28-20:50:12
*/

/* Private includes ----------------------------------------------------------*/

#include "CommHandler.h"
#include "CRC_HWI.h"
#include "UART_HWI.h"
#include "Complementary_Filter.h"
#include "IMU_Handler.h"
#include "math.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/

static uint8_t TX_Buffer[36u];

void CommHandler_HandleCommEvent(uint8_t receivedByte)
{
    if ('s' == receivedByte)
    {
        IMU_Handler_Data 	data 		= IMU_Handler_GetData();
        Orientation_Data_t 	orientation = Complementary_Filter_GetOrientationData();

        float degPhi    = orientation.phiHat    * 180.0f / M_PI;
        float degTheta  = orientation.thetaHat  * 180.0f / M_PI;

        TX_Buffer[0]  = *((uint8_t *)  &degPhi);
		TX_Buffer[1]  = *(((uint8_t *) &degPhi) + 1);
		TX_Buffer[2]  = *(((uint8_t *) &degPhi) + 2);
		TX_Buffer[3]  = *(((uint8_t *) &degPhi) + 3);
		TX_Buffer[4]  = *((uint8_t *)  &degTheta);
		TX_Buffer[5]  = *(((uint8_t *) &degTheta) + 1);
		TX_Buffer[6]  = *(((uint8_t *) &degTheta) + 2);
		TX_Buffer[7]  = *(((uint8_t *) &degTheta) + 3);
		TX_Buffer[8]  = *((uint8_t *)  &data.convertedData.fgyro[0]);
		TX_Buffer[9]  = *(((uint8_t *) &data.convertedData.fgyro[0]) + 1);
		TX_Buffer[10] = *(((uint8_t *) &data.convertedData.fgyro[0]) + 2);
		TX_Buffer[11] = *(((uint8_t *) &data.convertedData.fgyro[0]) + 3);
		TX_Buffer[12] = *((uint8_t *)  &data.convertedData.fgyro[1]);
		TX_Buffer[13] = *(((uint8_t *) &data.convertedData.fgyro[1]) + 1);
		TX_Buffer[14] = *(((uint8_t *) &data.convertedData.fgyro[1]) + 2);
		TX_Buffer[15] = *(((uint8_t *) &data.convertedData.fgyro[1]) + 3);
		TX_Buffer[16] = *((uint8_t *)  &data.convertedData.fgyro[2]);
		TX_Buffer[17] = *(((uint8_t *) &data.convertedData.fgyro[2]) + 1);
		TX_Buffer[18] = *(((uint8_t *) &data.convertedData.fgyro[2]) + 2);
		TX_Buffer[19] = *(((uint8_t *) &data.convertedData.fgyro[2]) + 3);
		TX_Buffer[20] = *((uint8_t *)  &data.convertedData.facc[0]);
		TX_Buffer[21] = *(((uint8_t *) &data.convertedData.facc[0]) + 1);
		TX_Buffer[22] = *(((uint8_t *) &data.convertedData.facc[0]) + 2);
		TX_Buffer[23] = *(((uint8_t *) &data.convertedData.facc[0]) + 3);
		TX_Buffer[24] = *((uint8_t *)  &data.convertedData.facc[1]);
		TX_Buffer[25] = *(((uint8_t *) &data.convertedData.facc[1]) + 1);
		TX_Buffer[26] = *(((uint8_t *) &data.convertedData.facc[1]) + 2);
		TX_Buffer[27] = *(((uint8_t *) &data.convertedData.facc[1]) + 3);
		TX_Buffer[28] = *((uint8_t *)  &data.convertedData.facc[2]);
		TX_Buffer[29] = *(((uint8_t *) &data.convertedData.facc[2]) + 1);
		TX_Buffer[30] = *(((uint8_t *) &data.convertedData.facc[2]) + 2);
		TX_Buffer[31] = *(((uint8_t *) &data.convertedData.facc[2]) + 3);

        uint32_t CRC_Calc[8];
        uint32_t crc;

		for (int var = 0; var < 8; var++)
		{
			CRC_Calc[var] = 0;
			CRC_Calc[var] |= TX_Buffer[0 + 4 * var] << 24;
			CRC_Calc[var] |= TX_Buffer[1 + 4 * var] << 16;
			CRC_Calc[var] |= TX_Buffer[2 + 4 * var] << 8;
			CRC_Calc[var] |= TX_Buffer[3 + 4 * var];
		}
		crc = CRC_HWI_Calculate((uint32_t *)CRC_Calc, 8);

		TX_Buffer[32] = (uint8_t)(crc & 0xFF);
		TX_Buffer[33] = (uint8_t)((crc & 0xFF00) >> 8);
		TX_Buffer[34] = (uint8_t)((crc & 0xFF0000) >> 16);
		TX_Buffer[35] = (uint8_t)((crc & 0xFF000000) >> 24);

		UART_HWI_Transmit_IT(TX_Buffer, 36u);
    }
}

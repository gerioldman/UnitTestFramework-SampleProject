/**
 * @file Suite1.c
 * @brief TODO
 * @date 2022-11-29-00:35:31
 */

/* Private includes ----------------------------------------------------------*/

#include "TestSuites.h"
#include "stub.h"
#include "UnitTestAssert.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

#define ORIENTATION_DATA_CONTENT ((Orientation_Data_t){.phiHat = M_PI_4, .thetaHat = M_PI_4 / 2.0f})
#define IMU_HANDLER_DATA_CONTENT ((IMU_Handler_Data){ \
	.rawData = {                                      \
		.acc = {0, 0, 0},                             \
		.gyro = {0, 0, 0}},                           \
	.convertedData = {.facc = {10.0f, 0.0f, 0.0f}, .fgyro = {1.0f, 0.0f, -1.0f}}})

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

static uint8_t TX_Buffer[36] = { [0 ... 35] = 0u };

static UART_HWI_StatusTypedef copyTX_Buffer(const uint8_t pBuffer[], uint16_t BufferLength);

static UART_HWI_StatusTypedef copyTX_Buffer(const uint8_t pBuffer[], uint16_t BufferLength)
{
	ASSERT_UINT16_EQUAL(BufferLength, 36u);

	if (BufferLength == 36u)
	{
		for (uint8_t i = 0; i<36u ; i++){
			TX_Buffer[i] = pBuffer[i];
		}
	}

	return TEST_STUB.UART_HWI_Transmit_IT.returnValue;
}

/**
 * @brief
 *
 */
void TS2_Test1()
{
	float degPhi, degTheta;

	/* Initialize Unit inputs */

	TEST_STUB.Complementary_Filter_GetOrientationData.returnValue = ORIENTATION_DATA_CONTENT;
	TEST_STUB.IMU_Handler_GetData.returnValue = IMU_HANDLER_DATA_CONTENT;
	TEST_STUB.CRC_HWI_Calculate.returnValue = 0x1f2f3f4fu;
	TEST_STUB.UART_HWI_Transmit_IT.returnValue = UART_HWI_OK;

	TEST_STUB.UART_HWI_Transmit_IT.stub_option = STUB_OPTION_REDIRECT;
	TEST_STUB.UART_HWI_Transmit_IT.redirectFuncPtr = copyTX_Buffer;

	degPhi = TEST_STUB.Complementary_Filter_GetOrientationData.returnValue.phiHat * 180.0f / M_PI;
	degTheta = TEST_STUB.Complementary_Filter_GetOrientationData.returnValue.thetaHat * 180.0f / M_PI;

	/* Test if HandleCommEvent responds to characters other than 's' */

	for (unsigned int i = 0u; i <= 255u; i++)
	{
		if (i != 's')
		{
			/* Unit should not respond if received character is not 's' */
			TEST_CALL_CommHandler_HandleCommEvent(i);
			ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_InitFilter.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_UpdateFilter.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_GetOrientationData.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_Init.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_HandleInterrupt.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_GetData.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.CRC_HWI_Calculate.callcount, 0u);
			ASSERT_UINT32_EQUAL(TEST_STUB.UART_HWI_Transmit_IT.callcount, 0u);
		}
	}

	/* Test if HandleCommEvent responds to 's' character */

	TEST_CALL_CommHandler_HandleCommEvent('s');

	ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_InitFilter.callcount, 0u);
	ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_UpdateFilter.callcount, 0u);
	ASSERT_UINT32_EQUAL(TEST_STUB.Complementary_Filter_GetOrientationData.callcount, 1u);
	ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_Init.callcount, 0u);
	ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_HandleInterrupt.callcount, 0u);
	ASSERT_UINT32_EQUAL(TEST_STUB.IMU_Handler_GetData.callcount, 1u);
	ASSERT_UINT32_EQUAL(TEST_STUB.CRC_HWI_Calculate.callcount, 1u);
	ASSERT_UINT32_EQUAL(TEST_STUB.UART_HWI_Transmit_IT.callcount, 1u);

	/* Test if response is correct */

	ASSERT_UINT8_EQUAL(TX_Buffer[ 0], *(((uint8_t * ) &degPhi) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 1], *(((uint8_t * ) &degPhi) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 2], *(((uint8_t * ) &degPhi) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 3], *(((uint8_t * ) &degPhi) + 3u ));
	 
	ASSERT_UINT8_EQUAL(TX_Buffer[ 4], *(((uint8_t * ) &degTheta) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 5], *(((uint8_t * ) &degTheta) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 6], *(((uint8_t * ) &degTheta) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 7], *(((uint8_t * ) &degTheta) + 3u ));
	 
	ASSERT_UINT8_EQUAL(TX_Buffer[ 8], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[0])  + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[ 9], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[0])  + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[10], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[0])  + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[11], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[0])  + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[12], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[1])  + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[13], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[1])  + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[14], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[1])  + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[15], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[1])  + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[16], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[2])  + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[17], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[2])  + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[18], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[2])  + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[19], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.fgyro[2])  + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[20], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[0]) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[21], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[0]) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[22], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[0]) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[23], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[0]) + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[24], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[1]) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[25], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[1]) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[26], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[1]) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[27], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[1]) + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[28], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[2]) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[29], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[2]) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[30], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[2]) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[31], *(((uint8_t * ) &TEST_STUB.IMU_Handler_GetData.returnValue.convertedData.facc[2]) + 3u ));

	ASSERT_UINT8_EQUAL(TX_Buffer[32], *(((uint8_t * ) &TEST_STUB.CRC_HWI_Calculate.returnValue) + 0u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[33], *(((uint8_t * ) &TEST_STUB.CRC_HWI_Calculate.returnValue) + 1u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[34], *(((uint8_t * ) &TEST_STUB.CRC_HWI_Calculate.returnValue) + 2u ));
	ASSERT_UINT8_EQUAL(TX_Buffer[35], *(((uint8_t * ) &TEST_STUB.CRC_HWI_Calculate.returnValue) + 3u ));

}

TestSuite Suite1 = {
	.name = "Suite1",
	.TestCases =
		{
			TEST_CASE_ENTRY(TS2_Test1),
			TEST_CASE_ENTRY(TEST_CASE_END),
		}};
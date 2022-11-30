/**
 * @file TS_Complementary_Filter.c
 * @brief TODO
 * @date 2022-11-30-02:16:42
*/

/* Private includes ----------------------------------------------------------*/

#include "TestSuites.h"
#include "stub.h"
#include "UnitTestAssert.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


/**
 * @brief This Test Case is checking wether the function does initialize internal variables to zero
 * 
 */
void InitFunctionTest()
{
	/* local variable to store read data */

	Orientation_Data_t data;
	float dummy_Accelerometer_data[3] = { 10.0f, 0.0f, 0.0f };
	float dummy_Gyroscope_data[3] = { 1.0f, 1.0f, 0.0f };
	
	/* Check initial value */
	
	data = TEST_CALL_Complementary_Filter_GetOrientationData();
	ASSERT_FLOAT_EQUAL(data.phiHat, 0.0f, 0.0f);
	ASSERT_FLOAT_EQUAL(data.thetaHat, 0.0f, 0.0f);

	/* Call UpdateFilter to change the internal variables */

	TEST_CALL_Complementary_Filter_UpdateFilter(dummy_Accelerometer_data, dummy_Gyroscope_data);

	/* Check if internal values changed */

	data = TEST_CALL_Complementary_Filter_GetOrientationData();
	ASSERT_FLOAT_NOT_EQUAL(data.phiHat, 0.0f, 0.0f);
	ASSERT_FLOAT_NOT_EQUAL(data.thetaHat, 0.0f, 0.0f);

	/* Call InitFilter function */

	TEST_CALL_Complementary_Filter_InitFilter();

	/* Check if internal values are back to zero */

	data = TEST_CALL_Complementary_Filter_GetOrientationData();
	ASSERT_FLOAT_EQUAL(data.phiHat, 0.0f, 0.0f);
	ASSERT_FLOAT_EQUAL(data.thetaHat, 0.0f, 0.0f);
	
}

/**
 * @brief This Test Case is checking the estimation of orientation
 * 
 */
void UpdateFunctionTest()
{

}

TestSuite TS_Complementary_Filter = {
	.name = "TS_Complementary_Filter",
	.TestCases = 
	{
		TEST_CASE_ENTRY(InitFunctionTest),
		TEST_CASE_ENTRY(UpdateFunctionTest),
		TEST_CASE_ENTRY(TEST_CASE_END),
	}
};
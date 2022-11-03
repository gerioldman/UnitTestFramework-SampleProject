/**
 * @file Suite1.c
 * @brief TODO
 * @date 2022-11-03-22:28:40
*/
#include "TestSuites.h"
/* Private includes ----------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


/**
 * @brief 
 * 
 */
void TS1_Test1()
{
}

/**
 * @brief 
 * 
 */
void TS1_Test2()
{
}

TestSuite Suite1 = {
	.name = "Suite1",
	.TestCases = 
	{
		{"TS1_Test1",TS1_Test1},
		{"TS1_Test2",TS1_Test2},
		{"TEST_CASE_END",TEST_CASE_END},
	}
};
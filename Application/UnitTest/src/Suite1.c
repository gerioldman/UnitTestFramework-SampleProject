/**
 * @file Suite1.c
 * @brief TODO
 * @date 2022-11-29-00:35:31
*/

/* Private includes ----------------------------------------------------------*/

#include "TestSuites.h"
#include "stub.h"

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
		TEST_CASE_ENTRY(TS1_Test1),
		TEST_CASE_ENTRY(TS1_Test2),
		TEST_CASE_ENTRY(TEST_CASE_END),
	}
};
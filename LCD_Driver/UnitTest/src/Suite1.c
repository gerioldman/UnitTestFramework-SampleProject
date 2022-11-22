/**
 * @file Suite1.c
 * @brief TODO
 * @date 2022-11-10-22:45:14
*/

/* Private includes ----------------------------------------------------------*/

#include "TestSuites.h"
#include "UnitTestAssert.h"
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
	char trace [10][20]; 
	TEST_STUB.TEST_TRACE.trace_buffer_length = 10u;
	TEST_STUB.TEST_TRACE.trace_buffer = trace;
	TEST_STUB.TEST_TRACE.trace_enabled = STUB_OPTION_TRACE_ON;

	TEST_CALL_LCD_Init();

	printf(TEST_STUB.TEST_TRACE.trace_buffer[0]);
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
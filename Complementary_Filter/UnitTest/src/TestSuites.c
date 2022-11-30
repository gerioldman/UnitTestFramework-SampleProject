/**
 * @file TestSuites.c
 * @brief TODO
 * @date 2022-11-28-02:08:18
*/
#include "TestSuites.h"
/* Private includes ----------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


extern TestSuite TS_Complementary_Filter;

TestSuite* testSuites[] = {
	&TS_Complementary_Filter,
	TEST_SUITE_END
};

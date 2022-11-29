/**
 * @file TestSuites.c
 * @brief TODO
 * @date 2022-11-28-20:50:12
*/
#include "TestSuites.h"
/* Private includes ----------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


extern TestSuite Suite1;

TestSuite* testSuites[] = {
	&Suite1,
	TEST_SUITE_END
};

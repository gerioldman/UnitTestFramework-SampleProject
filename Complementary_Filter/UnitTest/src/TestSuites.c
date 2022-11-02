/**
 * @file TestSuites.c
 * @brief TODO
 * @date 2022-11-01-21:47:52
*/
#include "TestSuites.h"
/* Private includes ----------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


extern TestSuite Suite1;
extern TestSuite Suite2;

TestSuite* testSuites[] = {
	&Suite1,
	&Suite2,
	TEST_SUITE_END
};

/**
 * @file TestSuites.h
 * @author gerioldman (krisztian.gergo49@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TESTSUITES_H
#define TESTSUITES_H

/* Includes */


/* Macros */

#define TEST_SUITE_END  0
#define TEST_CASE_END   0

#define TEST_CASE_ENTRY(TESTCASE) \
{ \
    .name = #TESTCASE, \
    .funct_ptr = TESTCASE, \
    .failed = 0u \
}

/* Type Definitions */

typedef struct {
    const char* name;
    void (*funct_ptr)(void);
    unsigned char failed;
}TestCase;

typedef struct{
    const char* name;
    void (*cleanUpBefore_funcPtr)(void);
    void (*cleanUpAfter_funcPtr)(void);
    TestCase TestCases[];
}TestSuite;

extern TestSuite *testSuites[];

/* End of TestSuites */

#endif // TESTSUITES_H
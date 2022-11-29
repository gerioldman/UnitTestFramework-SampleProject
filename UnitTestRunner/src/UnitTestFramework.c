/**
 * @file UnitTestFramework.c
 * @author gerioldman (k.gergo49@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-09-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "UnitTestFramework.h"

static const char *testHeader = 
" ________  _____ ______   ________  ___  __    ___  __    ________\n\
|\\   ____\\|\\   _ \\  _   \\|\\   __  \\|\\  \\|\\  \\ |\\  \\|\\  \\ |\\   __  \\\n\
\\ \\  \\___|\\ \\  \\\\\\__\\ \\  \\ \\  \\|\\  \\ \\  \\/  /|\\ \\  \\/  /|\\ \\  \\|\\  \\\n\
 \\ \\  \\    \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\   ___  \\ \\   ___  \\ \\   __  \\\n\
  \\ \\  \\____\\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\\\ \\  \\ \\  \\\\ \\  \\ \\  \\ \\  \\\n\
   \\ \\_______\\ \\__\\    \\ \\__\\ \\_______\\ \\__\\\\ \\__\\ \\__\\\\ \\__\\ \\__\\ \\__\\\n\
    \\|_______|\\|__|     \\|__|\\|_______|\\|__| \\|__|\\|__| \\|__|\\|__|\\|__|\n\
\n\
Open source unit test framework for embedded systems\n";

static void printfTestHeader(void)
{   
    printf("\x1b[38;5;130m");
    printf("%s", testHeader);
    printf("\x1b[0m");
}

void printSummary(){
    printf("\n\n");
    printf("Summary of Test:\n");
    for (int i = 0; testSuites[i] != TEST_SUITE_END; i++)
    {
        printf("\n%s:\n", testSuites[i]->name);
        for (int j = 0; (testSuites[i])->TestCases[j].funct_ptr != TEST_CASE_END; j++)
        {
            printf("%s: ", testSuites[i]->TestCases[j].name);
            if (testSuites[i]->TestCases[j].failed){
                SetBackgroundColour(BG_BRIGHTRED);
                printf("FAILED ❌\n");
                ResetColour();
            }
            else{
                SetBackgroundColour(BG_BRIGHTGREEN);
                printf("PASSED ✅\n");
                ResetColour();
            }
        }
    }
#if PLATFORM == 1
    printf("\nAsserts: %lu, Failed asserts: %lu\n", assertCount, failedAssertCount);
#else
    printf("\nAsserts: %u, Failed asserts: %u\n", assertCount, failedAssertCount);
#endif
}


void RunAllTests(void){
    // If file is written, then initialize LogFile variable
    if ((LOG_FILE == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
        LogFile = fopen("test.txt", "w");
    }
    // Print header
    printfTestHeader();
    // Run through all test suites
    for (int i = 0; testSuites[i] != TEST_SUITE_END; i++)
    {
        // Print test suite name
        if ((LOG_SCREEN == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
            printf("Executing TestSuite: %s\n", testSuites[i]->name);
        }
        if ((LOG_FILE == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
            fprintf(LogFile, "Executing TestSuite: %s\n", testSuites[i]->name);
        }
        // Run through all test cases
        for (int j = 0; (testSuites[i])->TestCases[j].funct_ptr != TEST_CASE_END; j++)
        {
            // Save failed assert count before test case to determine if Test Case failed
            uint32_t failedAssertCountBeforeTestCase = failedAssertCount;
            if(testSuites[i]->cleanUpBefore_funcPtr != ((void (*)()) 0u)) testSuites[i]->cleanUpBefore_funcPtr();
            if ((LOG_SCREEN == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
                printf("Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            }
            if ((LOG_FILE == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
                fprintf(LogFile, "Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            }
            (testSuites[i])->TestCases[j].funct_ptr();

            if(testSuites[i]->cleanUpAfter_funcPtr != ((void (*)()) 0u)) testSuites[i]->cleanUpAfter_funcPtr();

            if(failedAssertCount > failedAssertCountBeforeTestCase) testSuites[i]->TestCases[j].failed = TRUE;
        }
    }
    if ((LOG_FILE == LogMode) || (LOG_SCREEN_AND_FILE == LogMode)){
    fclose(LogFile);
    }

    printSummary();

    printf("\nSTOP.\n\n");
}
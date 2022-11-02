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

volatile const char *testHeader = 
" ________  _____ ______   ________  ___  __    ___  __    ________\n\
|\\   ____\\|\\   _ \\  _   \\|\\   __  \\|\\  \\|\\  \\ |\\  \\|\\  \\ |\\   __  \\\n\
\\ \\  \\___|\\ \\  \\\\\\__\\ \\  \\ \\  \\|\\  \\ \\  \\/  /|\\ \\  \\/  /|\\ \\  \\|\\  \\\n\
 \\ \\  \\    \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\   ___  \\ \\   ___  \\ \\   __  \\\n\
  \\ \\  \\____\\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\\\ \\  \\ \\  \\\\ \\  \\ \\  \\ \\  \\\n\
   \\ \\_______\\ \\__\\    \\ \\__\\ \\_______\\ \\__\\\\ \\__\\ \\__\\\\ \\__\\ \\__\\ \\__\\\n\
    \\|_______|\\|__|     \\|__|\\|_______|\\|__| \\|__|\\|__| \\|__|\\|__|\\|__|\n\
\n\
Open source unit test framework for embedded systems\n";


void printfTestHeader(void)
{   
    printf("\x1b[38;5;130m");
    printf("%s", testHeader);
    printf("\x1b[0m");
}

/**
 * @brief
 *
 */
void RunAllTests_Screen(void)
{
    LogMode = LOG_SCREEN;
    ColourMode = COLOUR;
    AssertMode = PRINT_EVERY_ASSERT;
    // Run all tests

    printfTestHeader();

    for (int i = 0; testSuites[i] != TEST_SUITE_END; i++)
    {
        printf("Executing TestSuite: %s\n", testSuites[i]->name);
        for (int j = 0; (testSuites[i])->TestCases[j].funct_ptr != TEST_CASE_END; j++)
        {
            printf("Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            (testSuites[i])->TestCases[j].funct_ptr();
            
        }
    }
    printf("\nSTOP.\n\n");
}


void RunAllTests_File(void)
{

    LogMode = LOG_FILE;
    LogFile = fopen("test.txt", "w");
    // Run all tests
    for (int i = 0; testSuites[i] != TEST_SUITE_END; i++)
    {
        fprintf(LogFile, "Executing TestSuite: %s\n", testSuites[i]->name);
        for (int j = 0; (testSuites[i])->TestCases[j].funct_ptr != TEST_CASE_END; j++)
        {
            fprintf(LogFile, "Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            (testSuites[i])->TestCases[j].funct_ptr();
        }
    }
    fclose(LogFile);
}

void RunAllTests_ScreenAndFile(void)
{                      
    // Set log mode to screen and file                                                
    LogMode = LOG_SCREEN_AND_FILE;
    // Open file
    LogFile = fopen("test.txt", "w");
    // Print header
    printfTestHeader();
    // Run through all test suites
    for (int i = 0; testSuites[i] != TEST_SUITE_END; i++)
    {
        // Print test suite name
        printf("Executing TestSuite: %s\n", testSuites[i]->name);
        fprintf(LogFile, "Executing TestSuite: %s\n", testSuites[i]->name);
        for (int j = 0; (testSuites[i])->TestCases[j].funct_ptr != TEST_CASE_END; j++)
        {
            testSuites[i]->cleanUpAfter_funcPtr();   
            printf("Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            fprintf(LogFile, "Executing TestCase: %s\n", (testSuites[i])->TestCases[j].name);
            (testSuites[i])->TestCases[j].funct_ptr();
            testSuites[i]->cleanUpAfter_funcPtr();
        }
    }
    fclose(LogFile);
}

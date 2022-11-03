/**
 * @file main.c
 * @author gerioldman (k.gergo49@gmail.com)
 * @brief Proccesses the command line arguments and runs the test suites.
 * @version 0.1
 * @date 2022-10-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "UnitTestFramework.h"
#include "math.h"

int main(int argc, char *argv[])
{

#if PLATFORM == 1
    AssertMode = PRINT_FAILED_ASSERT;
    ColourMode = COLOUR;
    RunAllTests_Screen();
    for (;;)
    {
        /* UnitTest done */
    }
#endif
#if PLATFORM == 0
    if (argc < 2)
    {
        RunAllTests_Screen();
    }
    else
    {
        unsigned char argi = 1;
        while (argi < argc)
        {
            if (strcmp(argv[argi], "-a") == 0)
            {
                AssertMode = PRINT_EVERY_ASSERT;
            }
            else if (strcmp(argv[argi], "--colour") == 0)
            {
                ColourMode = COLOUR;
            }
            else if (strcmp(argv[argi], "-s") == 0)
            {
                RunAllTests_Screen();
            }
            else if (strcmp(argv[argi], "-f") == 0)
            {
                RunAllTests_File();
            }
            else if (strcmp(argv[argi], "-fs") == 0)
            {
                RunAllTests_ScreenAndFile();
            }
            else
            {
                SetForegroundColour(FG_BRIGHTRED);
                printf("Run Mode incorrect. Please specify a correct runmode.\n \
                                1. Log to screen:\t\t-s\n \
                                3. Log to file:\t\t-f\n \
                                4. Log to file and screen:\t-fs\n");
                ResetColour();
            }
            argi++;
        }
    }
#endif
    return 0;
}

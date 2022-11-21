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

int main(int argc, char *argv[])
{

#if PLATFORM == 1
    AssertMode = PRINT_FAILED_ASSERT;
    ColourMode = COLOUR;
    LogMode = LOG_SCREEN;
    RunAllTests();
    for (;;)
    {
        /* UnitTest done */
    }
#endif
#if PLATFORM == 0
    if (argc < 2)
    {
        AssertMode = PRINT_FAILED_ASSERT;
        ColourMode = COLOUR;
        LogMode = LOG_SCREEN;
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
            else if (strcmp(argv[argi], "--no-colour") == 0)
            {
                ColourMode = NO_COLOUR;
            }
            else if (strcmp(argv[argi], "-s") == 0)
            {
                LogMode = LOG_SCREEN;
            }
            else if (strcmp(argv[argi], "-f") == 0)
            {
                LogMode = LOG_FILE;
            }
            else if (strcmp(argv[argi], "-fs") == 0)
            {
                LogMode = LOG_SCREEN_AND_FILE;
            }
            else
            {
                SetForegroundColour(FG_BRIGHTRED);
                printf("Run Mode incorrect. Please specify a correct runmode.\n \
                                1. Log to screen:\t\t-s\n \
                                2. Log to file:\t\t-f\n \
                                3. Log to file and screen:\t-fs\n \
                        Further options: \
                                -a: Print all assert, even passed ones \
                                --colour: enable colour printing \
                                --no-colour: disable colour printing");
                ResetColour();
            }
            argi++;
        }
    }

    RunAllTests();

#endif
    return 0;
}

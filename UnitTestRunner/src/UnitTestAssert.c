/**
 * @file UnitTestAssert.c
 * @author gerioldman (k.gergo49@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-09-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "UnitTestAssert.h"
#include <stdarg.h>

/**
 * @brief Global variable for setting Assert Mode
 * 
 */
AssertMode_Type AssertMode = PRINT_FAILED_ASSERT;

/**
 * @brief Global variable for setting Colour Mode
 * 
 */
ColourMode_Type ColourMode = NO_COLOUR;

/**
 * @brief Global variable for setting Log tMode
 * 
 */
LogMode_Type LogMode = LOG_SCREEN;

/**
 * @brief Global variable for setting File to log to
 * 
 */
FILE *LogFile;

uint32_t assertCount = 0u;
uint32_t failedAssertCount = 0;

/**
 * @brief Set a modifier for printed text
 * 
 * @param modifier See ModifierCode enum for options
 */
void SetModifier(ModifierCode modifier)
{
    if (ColourMode == COLOUR)
    {
        printf("\x1b[%dm", modifier);
    }
}

/**
 * @brief Set the foreground colour of printed text
 * 
 * @param colour See ForegroundColourCode enum for options
 */
void SetForegroundColour(ForegroundColourCode colour)
{
    if (ColourMode == COLOUR)
    {
        printf("\x1b[%dm", colour);
    }
}

/**
 * @brief Set the background colour of printed text
 * 
 * @param colour See BackgroundColourCode enum for options
 */
void SetBackgroundColour(BackgroundColourCode colour)
{
    if (ColourMode == COLOUR)
    {
        printf("\x1b[%dm", colour);
    }
}

/**
 * @brief Reset the options for the printed text
 * 
 */
void ResetColour(void)
{
    if (ColourMode == COLOUR)
    {
        printf("\x1b[0m");
    }
}

/**
 * @brief Implementation of printing assert based on settings by the user
 * 
 * @param condition evaluated condition
 * @param format format for the printed text
 * @param file In which file the assert was called
 * @param line In which line the assert was called
 * @param message Printed message after the assert
 */
void AssertPrint(boolean condition, char *format, char *file, int line, char *message)
{
    if (FALSE == condition || PRINT_EVERY_ASSERT == AssertMode)
    {
        switch (LogMode)
        {
            case LOG_SCREEN:
                if (condition)
                {
                    SetModifier(MC_BOLD);
                    SetBackgroundColour(BG_BRIGHTGREEN);
                    printf(format, file, line, message);
                    ResetColour();
                }
                else
                {
                    SetModifier(MC_BOLD);
                    SetBackgroundColour(BG_BRIGHTRED);
                    printf(format, file, line, message);
                    ResetColour();
                }
                break;
            case LOG_FILE:
                fprintf(LogFile, format, file, line, message);
                break;

            case LOG_SCREEN_AND_FILE:
                if (condition)
                {
                    SetModifier(MC_BOLD);
                    SetBackgroundColour(BG_BRIGHTGREEN);
                    printf(format, file, line, message);
                    ResetColour();
                }
                else
                {
                    SetModifier(MC_BOLD);
                    SetBackgroundColour(BG_BRIGHTRED);
                    printf(format, file, line, message);
                    ResetColour();
                }
                fprintf(LogFile, format, file, line, message);
                break;
            default:
                break;
        }
    }
}

/**
 * @brief Assert Implementation
 * 
 * @param condition Condition to be evaluated
 * @param format Format for the printed text
 * @param file File in which the assert was called
 * @param line Line in which the assert was called
 * @param argc Number of arguments to be printed
 * @param ... arguments to be printed
 */
void AssertImplementationWithFormat(boolean condition, char *format, char *file, int line,int argc, ...)
{
    /* Init variable args */
    va_list args;
    va_start(args, argc);
    char message[1024u];
    /* Print them into char array */
    vsnprintf(message,1024u,format, args);
    /* Call AssertPrint implementation for actually printing */
    AssertPrint(condition, "%s:%d: %s\n", file, line, message);
    /* Incremenet assert count */
    assertCount++;
    /* Increment failed assert, if condition evaluated to false */
    if(!condition) failedAssertCount++;
    /* End variable args */
    va_end(args);
}
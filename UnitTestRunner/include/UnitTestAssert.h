/**
 * @file UnitTestAssert.h
 * @author gerioldman (k.gergo49@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef UNITTESTASSRT_H
#define UNITTESTASSRT_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef enum{
    LOG_SCREEN,
    LOG_FILE,
    LOG_SCREEN_AND_FILE
}LogMode_Type;

typedef enum{
    PRINT_EVERY_ASSERT,
    PRINT_FAILED_ASSERT
}AssertMode_Type;

typedef enum{
    COLOUR,
    NO_COLOUR
}ColourMode_Type;

typedef enum
{
	BG_RESET = 0,
	BG_BLACK = 30,
	BG_RED = 31,
	BG_GREEN = 32,
	BG_YELLOW= 33,
	BG_BLUE= 34,
	BG_MAGENTA= 35, 
	BG_CYAN= 36,
	BG_WHITE= 37,
        BG_DEFAULT = 39,
	BG_BRIGHTBLACK= 90,
	BG_BRIGHTRED = 91,
	BG_BRIGHTGREEN= 92,
	BG_BRIGHTYELLOW= 93,
	BG_BRIGHTBLUE= 94,
	BG_BRIGHTMAGENTA= 95, 
	BG_BRIGHTCYAN= 96,
	BG_BRIGHTWHITE= 97
}BackgroundColourCode;

typedef enum
{
	FG_RESET = 0,
	FG_BLACK = 40,
	FG_RED = 41,
	FG_GREEN = 42,
	FG_YELLOW= 43,
	FG_BLUE= 44,
	FG_MAGENTA= 45, 
	FG_CYAN= 46,
	FG_WHITE= 47,
        FG_DEFAULT = 49,
	FG_BRIGHTBLACK= 100,
	FG_BRIGHTRED = 101,
	FG_BRIGHTGREEN= 102,
	FG_BRIGHTYELLOW= 103,
	FG_BRIGHTBLUE= 104,
	FG_BRIGHTMAGENTA= 105, 
	FG_BRIGHTCYAN= 106,
	FG_BRIGHTWHITE= 107
}ForegroundColourCode;

typedef enum{
    MC_RESET = 0,
    MC_BOLD = 1,
    MC_DIM = 2,
    MC_ITALIC = 3,
    MC_UNDERLINE = 4,
    MC_BLINK = 5,
    MC_INVERSE = 7,
    MC_HIDDEN = 8,
    MC_STRIKETHROUGH = 9
}ModifierCode;

extern LogMode_Type LogMode;
extern AssertMode_Type AssertMode;
extern ColourMode_Type ColourMode;
extern FILE *LogFile;
extern uint32_t assertCount;
extern uint32_t failedAssertCount;

typedef unsigned char   boolean;
#define TRUE            1
#define FALSE           0

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_INT8_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((int8_t)expected) == ((int8_t)actual),"note: Actual:("#actual": %d) was (Expected: %d)",__FILE__,__LINE__,2,((int8_t)expected),((int8_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((int8_t)expected) == ((int8_t)actual),"error: Actual:("#actual": %d) was not (Expected: %d)",__FILE__,__LINE__,2,((int8_t)expected),((int8_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_INT16_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((int16_t)expected) == ((int16_t)actual),"note: Actual:("#actual": %d) was (Expected: %d)",__FILE__,__LINE__,2,((int16_t)expected),((int16_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((int16_t)expected) == ((int16_t)actual),"error: Actual:("#actual": %d) was not (Expected: %d)",__FILE__,__LINE__,2,((int16_t)expected),((int16_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_INT32_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((int32_t)expected) == ((int32_t)actual),"note: Actual:("#actual": %ld) was (Expected: %ld)",__FILE__,__LINE__,2,((int32_t)expected),((int32_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((int32_t)expected) == ((int32_t)actual),"error: Actual:("#actual": %ld) was not (Expected: %ld)",__FILE__,__LINE__,2,((int32_t)expected),((int32_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_INT64_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((int64_t)expected) == ((int64_t)actual),"note: Actual:("#actual": %lld) was (Expected: %lld)",__FILE__,__LINE__,2,((int64_t)expected),((int64_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((int64_t)expected) == ((int64_t)actual),"error: Actual:("#actual": %lld) was not (Expected: %lld)",__FILE__,__LINE__,2,((int64_t)expected),((int64_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_UINT8_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint8_t)expected) == ((uint8_t)actual),"note: Actual:("#actual": %u) was (Expected: %u)",__FILE__,__LINE__,2,((uint8_t)expected),((uint8_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint8_t)expected) == ((uint8_t)actual),"error: Actual:("#actual": %u) was not (Expected: %u)",__FILE__,__LINE__,2,((uint8_t)expected),((uint8_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_UINT16_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint16_t)expected) == ((uint16_t)actual),"note: Actual:("#actual": %u) was (Expected: %u)",__FILE__,__LINE__,2,((uint16_t)expected),((uint16_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint16_t)expected) == ((uint16_t)actual),"error: Actual:("#actual": %u) was not (Expected: %u)",__FILE__,__LINE__,2,((uint16_t)expected),((uint16_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_UINT32_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint32_t)expected) == ((uint32_t)actual),"note: Actual:("#actual": %lu) was (Expected: %lu)",__FILE__,__LINE__,2,((uint32_t)expected),((uint32_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint32_t)expected) == ((uint32_t)actual),"error: Actual:("#actual": %lu) was not (Expected: %lu)",__FILE__,__LINE__,2,((uint32_t)expected),((uint32_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_UINT64_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint64_t)expected) == ((uint64_t)actual),"note: Actual:("#actual": %llu) was (Expected: %llu)",__FILE__,__LINE__,2,((uint64_t)expected),((uint64_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint64_t)expected) == ((uint64_t)actual),"error: Actual:("#actual": %llu) was not (Expected: %llu)",__FILE__,__LINE__,2,((uint64_t)expected),((uint64_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_HEX8_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint8_t)expected) == ((uint8_t)actual),"note: Actual:("#actual": 0x%02X) was (Expected: 0x%02X)",__FILE__,__LINE__,2,((uint8_t)expected),((uint8_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint8_t)expected) == ((uint8_t)actual),"error: Actual:("#actual": 0x%02X) was not (Expected: 0x%02X)",__FILE__,__LINE__,2,((uint8_t)expected),((uint8_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_HEX16_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint16_t)expected) == ((uint16_t)actual),"note: Actual:("#actual": 0x%04X) was (Expected: 0x%04X)",__FILE__,__LINE__,2,((uint16_t)expected),((uint16_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint16_t)expected) == ((uint16_t)actual),"error: Actual:("#actual": 0x%04X) was not (Expected: 0x%04X)",__FILE__,__LINE__,2,((uint16_t)expected),((uint16_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_HEX32_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint32_t)expected) == ((uint32_t)actual),"note: Actual:("#actual": 0x%08X) was (Expected: 0x%08X)",__FILE__,__LINE__,2,((uint32_t)expected),((uint32_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint32_t)expected) == ((uint32_t)actual),"error: Actual:("#actual": 0x%08X) was not (Expected: 0x%08X)",__FILE__,__LINE__,2,((uint32_t)expected),((uint32_t)actual)); \
        }

/**
 * @brief 
 * 
 * @param actual 
 * @param expected 
 */
#define ASSERT_HEX64_EQUAL(actual, expected) \
        if(expected == actual) \
        { \
                AssertImplementationWithFormat(((uint64_t)expected) == ((uint64_t)actual),"note: Actual:("#actual": 0x%016X) was (Expected: 0x%016X)",__FILE__,__LINE__,2,((uint64_t)expected),((uint64_t)actual)); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((uint64_t)expected) == ((uint64_t)actual),"error: Actual:("#actual": 0x%016X) was not (Expected: 0x%016X)",__FILE__,__LINE__,2,((uint64_t)expected),((uint64_t)actual)); \
        }

#define ASSERT_FLOAT_EQUAL(actual, expected, tolerance) \
        if(((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance))))) \
        { \
                AssertImplementationWithFormat(((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance)))),"note: Actual:("#actual": %f) was within tolerance (Expected: [ %f , %f ])",__FILE__,__LINE__,3,((float)actual),(((float)expected) - ((float) tolerance)),(((float)expected) + ((float) tolerance))); \
        } \
        else \
        { \
                AssertImplementationWithFormat(((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance)))),"error: Actual:("#actual": %f) was not within tolerance (Expected: [ %f , %f ])",__FILE__,__LINE__,3,((float)actual),(((float)expected) - ((float) tolerance)),(((float)expected) + ((float) tolerance))); \
        }

#define ASSERT_FLOAT_NOT_EQUAL(actual, expected, tolerance) \
        if(!((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance))))) \
        { \
                AssertImplementationWithFormat(!((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance)))),"note: Actual:("#actual": %f) was not within tolerance (Expected: [ %f , %f ])",__FILE__,__LINE__,3,((float)actual),(((float)expected) - ((float) tolerance)),(((float)expected) + ((float) tolerance))); \
        } \
        else \
        { \
                AssertImplementationWithFormat(!((((float)expected - (float)tolerance) <= ((float)actual)) && (((float)actual) <= (((float)expected) + ((float)tolerance)))),"error: Actual:("#actual": %f) was within tolerance (Expected: [ %f , %f ])",__FILE__,__LINE__,3,((float)actual),(((float)expected) - ((float) tolerance)),(((float)expected) + ((float) tolerance))); \
        }

#define ASSERT_STRING_EQUAL(actual, expected, maxlength) \
        if(strncmp(actual, expected, maxlength) == 0) \
        { \
                AssertImplementationWithFormat(strncmp(actual, expected, maxlength) == 0,"note: Actual:("#actual": %s) was (Expected: %s)",__FILE__,__LINE__,2,actual,expected); \
        } \
        else \
        { \
                AssertImplementationWithFormat(strncmp(actual, expected, maxlength) == 0,"error: Actual:("#actual": %s) was not (Expected: %s)",__FILE__,__LINE__,2,actual,expected); \
        }

void AssertImplementationWithFormat(boolean condition, char *format, char *file, int line,int argc, ...);
void SetModifier(ModifierCode modifier);
void SetForegroundColour(ForegroundColourCode colour);
void SetBackgroundColour(BackgroundColourCode colour);
void ResetColour(void);

#endif
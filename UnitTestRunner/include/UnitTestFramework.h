/**
 * @file UnitTestFramework.h
 * @author gerioldman (k.gergo49@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define TARGET_X86_64 x86_64

#ifndef UNITTESTFRAMEWORK_H
#define UNITTESTFRAMEWORK_H
#include "TestSuites.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UnitTestAssert.h"

void RunAllTests(void);


#endif // UNITTESTFRAMEWORK_H
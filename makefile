######################################
# database.mk
# 
# UNITLIST = list of units in project
#
######################################

include database.mk

#######################################
#
# UnitTestRunner.mk
# 
# UNITLIST = list of units in project
#
#######################################

include UnitTestRunner/UnitTestRunner.mk

#######################################
# Default settings
#######################################

# By default, colour is enabled, and things are printed to the screen only. 
TESTAPPARGS ?= --colour -s

#######################################
# x86_x64 compiler options
#######################################

# command, and compiler variables

MKDIR   	:= mkdir
RMDIR   	:= rm -rf
CC      	:= gcc
PYTHON  	:= python
UNITSTUBGEN := ./UnitTestSupport.py
BUILD_DIR	:= .obj
COV     	:= .cov
PRE  		:= .pre
EXE     	:= main.exe

# directories inside .obj folder:
# 	- Platform: object files are created here for the whole software build
# 
# 	- unittest_platform: object files are created here for the unit test on the used platform
#
# 	- unittest_x86_x64: object files are created here for the unit test on PC

PLATFORM_DIR = Platform
PLATFORM_UNITTEST_DIR = unittest_platform
X86_X64_UNITTEST_DIR = unittest_x86_x64

#    ████████  ██████  ██████   ██████
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██     ██████  ██████   ██████

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------																																													

# debug build?
DEBUG 	?= 1
# optimization
OPT 	?= -Og

# Target Compiler
TARGET_CC = arm-none-eabi-gcc
TARGET_AS = arm-none-eabi-gcc -x assembler-with-cpp
TARGET_CP = arm-none-eabi-objcopy
TARGET_SZ = arm-none-eabi-size

HEX = $(TARGET_CP) -O ihex
BIN = $(TARGET_CP) -O binary -S 


# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#######################################
# Flags
#######################################

# x86_x64 flags

CFLAGS  	:= -g -Wall -MMD -fprofile-abs-path
COVFLAGS	:= -fprofile-arcs -ftest-coverage -fPIC
LDFLAGS 	:= -lgcov --coverage
LDLIBS  	:= -lm

#    ████████  ██████  ██████   ██████
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██     ██████  ██████   ██████

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# STM32F446RE flags

C_DEFS =  \
-DUSE_HAL_DRIVER \
-DSTM32F446xx

ifeq ($(DEBUG), 1)
C_DEFS += -g -gdwarf-2
endif

CPU = -mcpu=cortex-m4
# fpu
FPU = -mfpu=fpv4-sp-d16
# float-abi
FLOAT-ABI = -mfloat-abi=hard
# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)
# macros for gcc
# AS defines
AS_DEFS = 
# AS includes
AS_INCLUDES =
# compile gcc flags
TARGET_ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections
TARGET_CFLAGS += $(MCU) $(C_DEFS) $(OPT) -Wall -fdata-sections -ffunction-sections -Wextra
# Generate dependency information
TARGET_CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"
# link script
TARGET_LDSCRIPT = $(PLATFORM_DIR)/STM32F446RETx_FLASH.ld
# libraries
TARGET_LIBS 	:= -lc -lm -lnosys 
TARGET_LIBDIR 	:= 
TARGET_LDFLAGS 	:= $(MCU) -specs=nano.specs -T$(TARGET_LDSCRIPT) $(TARGET_LIBDIR) $(TARGET_LIBS) -Wl,-Map=$(BUILD_DIR)/$(MAKECMDGOALS).map,--cref -Wl,--gc-sections -u _printf_float

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#######################################
# Include folders
#######################################

# ${Unitname}/Unit/include folders
UNIT_INCLUDE_FOLDERS 		= $(patsubst %,-I%/Unit/include,$(UNITLIST))

#######################################
# Source files
#######################################

UNIT_SOURCES_FOLDERS		=	$(patsubst %,%/Unit/src,$(UNITLIST))
UNIT_SOURCES				=   $(foreach var,$(UNIT_SOURCES_FOLDERS),$(wildcard $(var)/*.c))

#    ████████  ██████  ██████   ██████
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██     ██████  ██████   ██████

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Platform include folders # TODO: you have to add this yourself
PLATFORM_INCLUDE_FOLDERS	= \
-I$(PLATFORM_DIR)/Core/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Include \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Include

# Platform source files # TODO: you have to add this yourself
PLATFORM_SOURCES 	=   \
$(PLATFORM_DIR)/Core/Src/gpio.c \
$(PLATFORM_DIR)/Core/Src/adc.c \
$(PLATFORM_DIR)/Core/Src/crc.c \
$(PLATFORM_DIR)/Core/Src/spi.c \
$(PLATFORM_DIR)/Core/Src/tim.c \
$(PLATFORM_DIR)/Core/Src/usart.c \
$(PLATFORM_DIR)/Core/Src/stm32f4xx_it.c \
$(PLATFORM_DIR)/Core/Src/stm32f4xx_hal_msp.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_adc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_crc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c \
$(PLATFORM_DIR)/Core/Src/system_stm32f4xx.c \
$(PLATFORM_DIR)/Core/Src/lsm6dsl_reg.c \
$(PLATFORM_DIR)/Core/Src/main.c \
$(PLATFORM_DIR)/Core/Src/LCD_HWI.c \
$(PLATFORM_DIR)/Core/Src/CRC_HWI.c \
$(PLATFORM_DIR)/Core/Src/UART_HWI.c \
$(PLATFORM_DIR)/Core/Src/IMU_HWI.c 

PLATFORM_ASSEMBLY 	=	$(PLATFORM_DIR)/startup_stm32f446xx.s

#######################################
#
# OBJS
#
#######################################

#######################################
# whole software build objs # TODO: you have to add this yourself
#######################################

ifneq (,$(findstring all,$(MAKECMDGOALS)))

OBJS_FOR_PLATFORM =  $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(PLATFORM_SOURCES:.c=.o)))
OBJS_FOR_PLATFORM += $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(PLATFORM_ASSEMBLY:.s=.o)))
OBJS_FOR_PLATFORM += $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(UNIT_SOURCES:.c=.o)))

vpath %.c $(sort $(dir $(UNIT_SOURCES)))
vpath %.c $(sort $(dir $(PLATFORM_SOURCES)))
vpath %.s $(sort $(dir $(PLATFORM_ASSEMBLY)))

endif

#######################################
# platform unittest build objs # TODO: you have to add this yourself
#######################################

ifneq (,$(findstring unittest_platform,$(MAKECMDGOALS)))

# Minimal source files for target to work
OBJS_FOR_PLATFORM_UNITTEST 	=  $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(PLATFORM_ASSEMBLY:.s=.o)))
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/system_stm32f4xx.o
# UnitTest source files
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTSTUBSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTRUNNERSOURCE:.c=.o)))
# RTT source files for J-Run unit testing
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_printf.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_Syscalls_GCC.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_ASM_ARMv7M.o

# Paths for these files are added to vpath, so make looks for source files in these paths as well
vpath %.s $(sort $(dir $(PLATFORM_ASSEMBLY)))
vpath %.c $(sort $(dir $(UNITSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTSTUBSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTRUNNERSOURCE)))
vpath %.c $(PLATFORM_DIR)/Core/Src/
vpath %.S $(PLATFORM_DIR)/Core/Src/

endif

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#######################################
# x86_x64 unittest build objs
#######################################

ifneq (,$(findstring unittest_x86_x64,$(MAKECMDGOALS))$(findstring coverage,$(MAKECMDGOALS)))

OBJS_FOR_X86_X64_UNITTEST 	 = $(addprefix $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/,$(notdir $(UNITSOURCE:.c=.o)))
OBJS_FOR_X86_X64_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/,$(notdir $(UNITTESTSOURCE:.c=.o)))
OBJS_FOR_X86_X64_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/,$(notdir $(UNITTESTSTUBSOURCE:.c=.o)))
OBJS_FOR_X86_X64_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/,$(notdir $(UNITTESTRUNNERSOURCE:.c=.o)))

vpath %.c $(sort $(dir $(UNITSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTSTUBSOURCE)))
vpath %.c $(sort $(dir $(UNITTESTRUNNERSOURCE)))

endif

#######################################
# Rules
#######################################

.PHONY: unittest_platform_build unittest_platform_flash unittest_platform_run unittest_x86_x64_build all flash-all coverage coverage-html check clean

# .PHONY: Rules: 
# 	created tasks for VSCode expect a make targets under these names:
#
# 	- unittest_platform_build: build unittest for target platform 		# TODO: you have to add this yourself
# 
# 	- unittest_platform_flash: flash built platform unittest on target 	# TODO: you have to add this yourself
#
# 	- unittest_platform_run: run platform unittest on target 			# TODO: you have to add this yourself
#
# 	- unittest_x86_x64_build: build unittest for target platform
#
#	- all: build whole software											# TODO: you have to add this yourself
#
#	- flash-all: flash whole software									# TODO: you have to add this yourself
#
#	- coverage: output coverage summary to the terminal
#
#	- coverage-html: create html representation of the coverage results
#
#	- check: you can check for dependencies of the framework like gcovr and so on...
#
#	- clean: delete .obj folder
#
#	- stubgen: generate stub for the selected Unit


#    ████████  ██████  ██████   ██████
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██     ██████  ██████   ██████

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Some headers might cause errors during stub generation, you can create fake headers, look up PyCParser fake include headers
# Plus add include librarys from the platform here.

STUBGEN_PLATFORM_INCLUDES = \
-IC:\Python310\Lib\site-packages\pycparser\utils\fake_libc_include \
-IC:\Python310\Lib\site-packages\pycparser\utils\fake_libc_include\arm \
-I$(PLATFORM_DIR)/Core/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Include

# PyCParser doesn't support extensions to the C99 standard, add defines so GNU extensions like __attribute__(x) are thrown out by the preprocessor.
# In the future, I might create an extension for the PyCParser module to be able to process GNU extensions, but for now this is the solution, 
# recommended by the creator of the module. https://github.com/eliben/pycparser/wiki/FAQ#what-do-i-do-about-__attribute

STUBGEN_DEFINES = 	-D'__attribute__(x)=' \
					-D'__ASM=' \
					-D'__IO=volatile' \
					-D'__STATIC_INLINE=static inline' \
					-D'__NOP()' \
					-D'__RAM_FUNC' \
					-D'__NOINLINE' \
					-D'__ALIGN_BEGIN' \
					-D'__ALIGN_END' \
					-D'__packed' \
					-D'__weak' \
					-D'UNUSED(X)'

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# stub generation rules

stubgen: $(UNIT)/$(PRE)/$(UNIT).i
	@$(PYTHON) $(UNITSTUBGEN) $(UNIT)/$(PRE)/$(UNIT).i $(UNITTESTPATH)
	@rm -fR $(UNIT)/$(PRE)

$(UNIT)/$(PRE)/$(UNIT).i: $(UNITPATH)/src/$(UNIT).c | $(UNIT)/$(PRE)
	@$(TARGET_CC) -E -nostdinc $(C_DEFS) $(UNIT_INCLUDE_FOLDERS) $(STUBGEN_PLATFORM_INCLUDES) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 $(STUBGEN_DEFINES) -c $< -o $@ 

# check rule, feel free to add more checks

check:
	@echo "Check for Compiler:"
	@$(CC) --version
	@echo "Check for Target Compiler:"
	@$(TARGET_CC) --version
	@echo "Check for Python:"
	@$(PYTHON) --version
	@echo
	@echo "Check for gcovr:"
	@gcovr --version

#######################################
# x86_64 Rules
#######################################

unittest_x86_x64_build:  $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/$(EXE)

# Linking rule
$(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/$(EXE): $(OBJS_FOR_X86_X64_UNITTEST) | $(BUILD_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)
	@echo "# Linking $@"
	@$(CC) $(LDFLAGS) $^ -o $@ $(LDLIBS)

# Compilation rule, for Unit source files tested, they are compiled with coverage flags, so coverage information is generated for only those files.
$(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR) $(UNIT)/$(COV)
	@echo Building file: $<
	@if [ ! -z "$(findstring $(UNITSRC),$<)" ]; then \
		$(CC) $(CFLAGS) $(C_DEFS) $(COVFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -DPLATFORM=0 -c $< -o $@; \
	else \
		$(CC) $(CFLAGS) $(C_DEFS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -DPLATFORM=0 -c $< -o $@; \
	fi

# Rule for printing coverage summary
coverage: unittest_x86_x64_build
	@echo "Running coverage analysis"
	@.\.obj\unittest_x86_x64\main.exe
	@gcovr -r . -s

# Rule for generating coverage information in html format
coverage-html: unittest_x86_x64_build | $(UNIT)/$(COV)
	@echo "Running coverage analysis with html output"
	@.\.obj\unittest_x86_x64\main.exe
	@gcovr -r . --html --html-details -o $(UNIT)/$(COV)/index.html

#    ████████  ██████  ██████   ██████
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██    ██    ██ ██   ██ ██    ██
#       ██     ██████  ██████   ██████

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#######################################
# Platform UnitTest Rules
#######################################

# target rules # TODO: User has to add this

# binaries to be created
unittest_platform_build: $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.elf $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.hex $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.bin

# flash rule: invoke Jlink with a jlink script to upload software
unittest_platform_flash: unittest_platform_build
	@JLink.exe -commanderscript .\Platform\downloadUnitTest.jlink

# run rule: invoke jrun to run Unit Test on target
unittest_platform_run: unittest_platform_build
	@jrun -device STM32F446RE -if SWD -speed 4000 --quit --verbose .\.obj\unittest_platform\unittest_platform.elf

# unittest build rule

# linking rule
$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.elf: $(OBJS_FOR_PLATFORM_UNITTEST) | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Linking target: $@
	@$(TARGET_CC) $(OBJS_FOR_PLATFORM_UNITTEST) $(TARGET_LDFLAGS) -o $@
	@echo Finished building target: $@
	@$(TARGET_SZ) $@

# *.c source file rule
$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_CC) -c $(TARGET_CFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -DPLATFORM=1 -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

# *.s source file rule
$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.s | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) -I$(PLATFORM_DIR)/Core/Inc $< -o $@
# *.S source file rule
$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.S | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) -I$(PLATFORM_DIR)/Core/Inc $< -o $@


#######################################
# Platform software Rules
#######################################

# build whole software
all: $(BUILD_DIR)/$(PLATFORM_DIR)/platform.elf $(BUILD_DIR)/$(PLATFORM_DIR)/platform.hex $(BUILD_DIR)/$(PLATFORM_DIR)/platform.bin

# flash whole software
flash-all: all
	@JLink.exe -commanderscript .\Platform\downloadPlatform.jlink

# linking rule
$(BUILD_DIR)/$(PLATFORM_DIR)/platform.elf: $(OBJS_FOR_PLATFORM) | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Linking target: $@
	@$(TARGET_CC) $(OBJS_FOR_PLATFORM) $(TARGET_LDFLAGS) -o $@
	@echo Finished building target: $@
	@$(TARGET_SZ) $@

# *.c source file rule
$(BUILD_DIR)/$(PLATFORM_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Building file: $<
	@$(TARGET_CC) -c $(TARGET_CFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) -DUNITTEST=0 -DPLATFORM=1 -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(PLATFORM_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

# *.s source file rule
$(BUILD_DIR)/$(PLATFORM_DIR)/%.o: %.s | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) $< -o $@

# Rule for creating .hex binary
%.hex: %.elf | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Creating HEX file: $@
	@$(HEX) $< $@

# Rule for creating .bin binary
%.bin: %.elf | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Creating BIN file: $@
	@$(BIN) $< $@

# Rule for creating folders
$(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR) $(UNIT)/$(COV) $(UNIT)/$(PRE):
	@$(MKDIR) -p $@

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#######################################
# clean up
#######################################

clean:
	@-rm -fR $(BUILD_DIR)
  
#######################################
# dependencies
#######################################

# whole software build dependencies
ifneq (,$(findstring all,$(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(PLATFORM_DIR)/*.d)
endif

# platform unittest build dependencies
ifneq (,$(findstring unittest_platform,$(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/*.d)
endif

# x86_x64 unittest build dependencies
ifneq (,$(findstring unittest_x86_x64,$(MAKECMDGOALS))$(findstring coverage,$(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/*.d)
endif
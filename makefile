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

TESTAPPARGS ?= --colour -a -s
TARGET ?= x86_x64
# debug build?
DEBUG 	?= 1
# optimization
OPT 	?= -Og


#######################################
# x86_x64 compiler options
#######################################

MKDIR   	:= mkdir
RMDIR   	:= rm -rf
CC      	:= gcc
PYTHON  	:= python
UNITSTUBGEN := ./UnitTestSupport.py
BUILD_DIR	:= .obj
COV     	:= .cov
PRE  		:= .pre
EXE     	:= main.exe

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
																																														
TARGET_CC = arm-none-eabi-gcc
TARGET_AS = arm-none-eabi-gcc -x assembler-with-cpp
TARGET_CP = arm-none-eabi-objcopy
TARGET_SZ = arm-none-eabi-size

HEX = $(TARGET_CP) -O ihex
BIN = $(TARGET_CP) -O binary -S 

PLATFORM_DIR = Platform
PLATFORM_UNITTEST_DIR = unittest_platform
X86_X64_UNITTEST_DIR = unittest_x86_x64

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
TARGET_CFLAGS += $(MCU) $(C_DEFS) $(OPT) -Wall -fdata-sections -ffunction-sections
# Generate dependency information
TARGET_CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"
# link script
TARGET_LDSCRIPT = $(PLATFORM_DIR)/STM32F446RETx_FLASH.ld
# libraries
TARGET_LIBS 	:= -lc -lm -lnosys 
TARGET_LIBDIR 	:= 
TARGET_LDFLAGS 	:= $(MCU) -specs=nano.specs -T$(TARGET_LDSCRIPT) $(TARGET_LIBDIR) $(TARGET_LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections -u _printf_float

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
$(PLATFORM_DIR)/Core/Src/main.c

PLATFORM_ASSEMBLY 	=	$(PLATFORM_DIR)/startup_stm32f446xx.s

#######################################
# OBJS
#######################################

# whole software build dependencies
ifneq (,$(findstring all,$(MAKECMDGOALS)))

OBJS_FOR_PLATFORM			=  $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(PLATFORM_SOURCES:.c=.o)))
OBJS_FOR_PLATFORM			+= $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(PLATFORM_ASSEMBLY:.s=.o)))
OBJS_FOR_PLATFORM			+= $(addprefix $(BUILD_DIR)/$(PLATFORM_DIR)/,$(notdir $(UNIT_SOURCES:.c=.o)))

vpath %.c $(sort $(dir $(UNIT_SOURCES)))
vpath %.c $(sort $(dir $(PLATFORM_SOURCES)))
vpath %.s $(sort $(dir $(PLATFORM_ASSEMBLY)))

endif

# platform unittest build dependencies
ifneq (,$(findstring unittest_platform,$(MAKECMDGOALS)))

OBJS_FOR_PLATFORM_UNITTEST 	=  $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(PLATFORM_ASSEMBLY:.s=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTSTUBSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST 	+= $(addprefix $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/,$(notdir $(UNITTESTRUNNERSOURCE:.c=.o)))
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/system_stm32f4xx.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_printf.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_Syscalls_GCC.o
OBJS_FOR_PLATFORM_UNITTEST	+= .obj/unittest_platform/SEGGER_RTT_ASM_ARMv7M.o

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

# x86_x64 unittest build dependencies
ifneq (,$(findstring unittest_x86_x64,$(MAKECMDGOALS)) $(findstring coverage,$(MAKECMDGOALS)) )

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

.PHONY: unittest_platform_build unittest_x86_x64_build all flash coverage coverage-html


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

STUBGEN_PLATFORM_INCLUDES = \
-IC:\Python310\Lib\site-packages\pycparser\utils\fake_libc_include \
-IC:\Python310\Lib\site-packages\pycparser\utils\fake_libc_include\arm \
-I$(PLATFORM_DIR)/Core/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Include

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

stubgen: $(UNIT)/$(PRE)/$(UNIT).i
	@$(PYTHON) $(UNITSTUBGEN) $(UNIT)/$(PRE)/$(UNIT).i $(UNITTESTPATH)
	@rm -fR $(UNIT)/$(PRE)

$(UNIT)/$(PRE)/$(UNIT).i: $(UNITPATH)/src/$(UNIT).c | $(UNIT)/$(PRE)
	@$(TARGET_CC) -E -nostdinc $(C_DEFS) $(UNIT_INCLUDE_FOLDERS) $(STUBGEN_PLATFORM_INCLUDES) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 $(STUBGEN_DEFINES) -c $< -o $@ 

#######################################
# x86_64 Rules
#######################################

unittest_x86_x64_build:  $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/$(EXE)

$(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/$(EXE): $(OBJS_FOR_X86_X64_UNITTEST) | $(BUILD_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)
	@echo "# Linking $@"
	@$(CC) $(LDFLAGS) $^ -o $@ $(LDLIBS)

$(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR) $(UNITPATH)/$(COV)
	@echo Building file: $<
	@if [ ! -z "$(findstring $(UNITSRC),$<)" ]; then \
		$(CC) $(CFLAGS) $(C_DEFS) $(COVFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -c $< -o $@; \
	else \
		$(CC) $(CFLAGS) $(C_DEFS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -c $< -o $@; \
	fi

coverage: unittest_x86_x64_build
	@echo "Running coverage analysis"
	@.\.obj\unittest_x86_x64\main.exe
	@gcovr -r . -s

coverage-html: unittest_x86_x64_build | $(UNITPATH)/$(COV)
	@echo "Running coverage analysis with html output"
	@.\.obj\unittest_x86_x64\main.exe
	@gcovr -r . --html --html-details -o $(UNITPATH)/$(COV)/index.html

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

unittest_platform_build: $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.elf $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.hex $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.bin

unittest_platform_flash: unittest_platform_build
	@JLink.exe -commanderscript .\Platform\downloadUnitTest.jlink

# unittest build

$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/unittest_platform.elf: $(OBJS_FOR_PLATFORM_UNITTEST) | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Linking target: $@
	@$(TARGET_CC) $(OBJS_FOR_PLATFORM_UNITTEST) $(TARGET_LDFLAGS) -o $@
	@echo Finished building target: $@
	@$(TARGET_SZ) $@

$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_CC) -c $(TARGET_CFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) $(UNITTESTRUNNERINCLUDE) $(UNITTESTSTUBINCLUDE) $(UNITTESTINCLUDE) -DUNITTEST=1 -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.s | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) -I$(PLATFORM_DIR)/Core/Inc $< -o $@

$(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/%.o: %.S | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) -I$(PLATFORM_DIR)/Core/Inc $< -o $@


# whole project build


all: $(BUILD_DIR)/$(PLATFORM_DIR)/platform.elf $(BUILD_DIR)/$(PLATFORM_DIR)/platform.hex $(BUILD_DIR)/$(PLATFORM_DIR)/platform.bin

flash: all
	@JLink.exe -commanderscript .\Platform\downloadPlatform.jlink

$(BUILD_DIR)/$(PLATFORM_DIR)/platform.elf: $(OBJS_FOR_PLATFORM) | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Linking target: $@
	@$(TARGET_CC) $(OBJS_FOR_PLATFORM) $(TARGET_LDFLAGS) -o $@
	@echo Finished building target: $@
	@$(TARGET_SZ) $@

$(BUILD_DIR)/$(PLATFORM_DIR)/%.o: %.c | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Building file: $<
	@$(TARGET_CC) -c $(TARGET_CFLAGS) $(UNIT_INCLUDE_FOLDERS) $(PLATFORM_INCLUDE_FOLDERS) -DUNITTEST=0 -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(PLATFORM_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/$(PLATFORM_DIR)/%.o: %.s | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_ASFLAGS) $< -o $@


%.hex: %.elf | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Creating HEX file: $@
	@$(HEX) $< $@
	
%.bin: %.elf | $(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR)
	@echo Creating BIN file: $@
	@$(BIN) $< $@

$(BUILD_DIR) $(BUILD_DIR)/$(PLATFORM_DIR) $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR) $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR) $(UNITPATH)/$(COV) $(UNIT)/$(PRE):
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

# whole software build dependencies
ifneq (,$(findstring all, $(MAKECMDGOALS)) $(findstring flash, $(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(PLATFORM_DIR)/*.d)
endif

# platform unittest build dependencies
ifneq (,$(findstring unittest_platform_build,$(MAKECMDGOALS)) $(findstring unittest_platform_flash,$(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(PLATFORM_UNITTEST_DIR)/*.d)
endif

# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Target specific rules - THIS IS UP TO THE USER TO ADD!												
#																										
# The following rules are just examples of how to add rules for a specific target based on a STM32CubeMX generated makefile.					
# ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# x86_x64 unittest build dependencies
ifneq (,$(findstring unittest_x86_x64_build,$(MAKECMDGOALS)) $(findstring unittest_x86_x64_run,$(MAKECMDGOALS)))
-include $(wildcard $(BUILD_DIR)/$(X86_X64_UNITTEST_DIR)/*.d)
endif
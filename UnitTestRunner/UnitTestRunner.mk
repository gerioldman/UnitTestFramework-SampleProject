###########################
# Unit build for unit test
###########################

FOUNDSTRING = $(findstring unittest_x86_x64_build,$(MAKECMDGOALS))$(findstring unittest_platform_build,$(MAKECMDGOALS))

ifneq (,$(FOUNDSTRING))

# Paths needed
BUILD_DIR				:= 	.obj
UNITTESTRUNNERPATH 		:= 	UnitTestRunner
UNITTESTRUNNERSRC		:= 	$(UNITTESTRUNNERPATH)/src

# UnitTestRunner files and paths
UNITTESTRUNNERSOURCE 	:= 	$(UNITTESTRUNNERSRC)/UnitTestFramework.c \
						   	$(UNITTESTRUNNERSRC)/UnitTestAssert.c \
							$(UNITTESTRUNNERSRC)/UnitTestRunner.c

UNITTESTRUNNERINCLUDE 	:= 	-I$(UNITTESTRUNNERPATH)/include
#UNITTESTRUNNEROBJS 		:= 	$(patsubst $(UNITTESTRUNNERSRC)/%.c,$(BUILD_DIR)/%.o,$(UNITTESTRUNNERSOURCE))

# UnitTest files and paths
UNITTESTPATH 			:= 	$(UNIT)/UnitTest
UNITTESTSRC 			:= 	$(UNITTESTPATH)/src
UNITTESTSOURCE 			:= 	$(wildcard $(UNITTESTSRC)/*.c)
UNITTESTINCLUDE 		:= 	-I$(UNITTESTPATH)/include
#UNITTESTOBJS 			:= 	$(patsubst $(UNITTESTSRC)/%.c,$(BUILD_DIR)/%.o,$(UNITTESTSOURCE))

# Unit files and pathsma
UNITPATH 				:= 	$(UNIT)/Unit
UNITSRC 				:= 	$(UNITPATH)/src
UNITSOURCE 				:= 	$(wildcard $(UNITSRC)/*.c)
#UNITOBJS 				:= 	$(patsubst $(UNITSRC)/%.c,$(BUILD_DIR)/%.o,$(UNITSOURCE))

# UnitTest stub files and paths
UNITTESTSTUBSRC 		:= 	$(UNITTESTPATH)/src/stubs
UNITTESTSTUBSOURCE 		:= 	$(wildcard $(UNITTESTSTUBSRC)/*.c)
UNITTESTSTUBINCLUDE 	:= 	-I$(UNITTESTPATH)/include/stubs
#UNITTESTSTUBOBJS 		:= 	$(patsubst $(UNITTESTSTUBSRC)/%.c,$(BUILD_DIR)/%.o,$(UNITTESTSTUBSOURCE))

# Include paths
UNITTEST_INCLUDE_FOLDERS = 
UNITTEST_INCLUDE_FOLDERS += $(UNITTESTRUNNERINCLUDE)
UNITTEST_INCLUDE_FOLDERS += $(UNITTESTSTUBINCLUDE)
UNITTEST_INCLUDE_FOLDERS += $(UNITTESTINCLUDE)

endif




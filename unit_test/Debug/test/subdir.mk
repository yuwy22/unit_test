################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/gtest_main.cpp \
../test/test_factorial.cpp 

OBJS += \
./test/gtest_main.o \
./test/test_factorial.o 

CPP_DEPS += \
./test/gtest_main.d \
./test/test_factorial.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/yuw/Appletini/PrimaryAnalysis/unit_test/gtest_src" -I"/home/yuw/Appletini/PrimaryAnalysis/unit_test/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



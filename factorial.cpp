/*
 * factorial.cpp
 *
 *  Created on: Jul 27, 2014
 *      Author: yuw
 */
#include "gtest/gtest.h"
int Factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}

class QuickTest : public testing::Test {

       protected:
        virtual void SetUp() {
             start_time_ = time(NULL);
       }

      virtual void TearDown() {
        const time_t end_time = time(NULL);
        EXPECT_TRUE(end_time - start_time_ <= 5) << "The test took too long.";
            }

      time_t start_time_;
};

class IntegerFunctionTest : public QuickTest {};

     TEST_F(IntegerFunctionTest, negative) {
               EXPECT_EQ(1, Factorial(-5));
               EXPECT_EQ(1, Factorial(-1));
               EXPECT_GT(Factorial(-10), 0);
     }

    TEST_F(IntegerFunctionTest, DISABLED_zero) {
              EXPECT_EQ(1, Factorial(0));
    }

    TEST_F(IntegerFunctionTest, postive) {
              EXPECT_EQ(1, Factorial(1));
              EXPECT_EQ(2, Factorial(2));
              EXPECT_EQ(6, Factorial(3));
              EXPECT_EQ(40320, Factorial(8));
    }


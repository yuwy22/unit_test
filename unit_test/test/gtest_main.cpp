/*
 * gtest_main.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: yuw
 */
#include <stdio.h>
#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}




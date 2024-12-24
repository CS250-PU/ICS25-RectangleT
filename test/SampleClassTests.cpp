 #include <gtest/gtest.h>

#include "../include/SampleClass.h"

TEST (SampleClassTest, factorial) {
  SampleClass cSampleClass;

  EXPECT_EQ (1, cSampleClass.factorial (0));
  EXPECT_EQ (1, cSampleClass.factorial (1));
  EXPECT_EQ (2, cSampleClass.factorial (2));
  EXPECT_EQ (6, cSampleClass.factorial (3));
  EXPECT_EQ (24, cSampleClass.factorial (4));
  EXPECT_EQ (-1, cSampleClass.factorial (-1));
  EXPECT_EQ (-1, cSampleClass.factorial (-2));
}

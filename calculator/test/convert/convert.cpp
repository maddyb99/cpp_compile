#include <limits.h>
#include "gtest/gtest.h"
#include "convert.h"
#include<string>

class ConversionTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST(ConversionTest,convertToPostFix){
    const std::string output="23+";
    const std::string input="2+3";
    EXPECT_EQ(output,convertToPostFix(input));
    // EXPECT_STREQ(5,convertToPostFix(2,3));
}
#include <limits.h>
#include "gtest/gtest.h"
#include "calculate.h"

class CalculationTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST_F(CalculationTest,calculator){
    EXPECT_EQ(5,calculator("23+"));
}
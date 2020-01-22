#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::vector<int> input1 = {-22,-1,5,97};
  double actual1 = solution.FindAverage(input1);
  double expected1 = 9.75;

  std::vector<int> input2 = {};
  double actual2 = solution.FindAverage(input2);
  double expected2 = INT32_MIN;

  EXPECT_DOUBLE_EQ(expected1, actual1);
  EXPECT_DOUBLE_EQ(expected2, actual2);
}
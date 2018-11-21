#include <gtest/gtest.h>

#include "fibo.h"

TEST(factorial, six) {
  EXPECT_EQ(720, factorial(6));
}

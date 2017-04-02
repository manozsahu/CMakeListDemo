#include <gtest/gtest.h>
#include "../mylibs/mylib.h"

TEST(Addition, CanAddTwoNumbers) {
//libfun1();
  EXPECT_EQ(libfun1(2), 2);
//  EXPECT_EQ(add(-2, 2), 0);
}

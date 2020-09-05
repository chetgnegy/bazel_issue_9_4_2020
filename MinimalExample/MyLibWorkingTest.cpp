#include "MinimalExample/ComplicatedLib.h"

#include "gtest/gtest.h"

TEST(MyLibTest, CleverTestName) {
  ComplicatedLib lib;
  printf("%d\n", lib.GetAnswer());
}

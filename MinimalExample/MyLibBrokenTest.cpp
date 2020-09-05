#include "MinimalExample/MyLib.h"

#include "gtest/gtest.h"

TEST(MyLibTest, MyLibUpdates) {
  MyLib lib;
  printf("%d\n", lib.GetAnswer());
}
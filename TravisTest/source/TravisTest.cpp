#include <stdio.h>
#include "TMath.h"
#include<iostream>
#include <gtest/gtest.h>
#include <conio.h>

TMath mmath;

int main(int argc, char *argv[]) {
  std::cout << "Hello World!" << std::endl;
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << RUN_ALL_TESTS();
  _getch();

  return 0;
}

TEST(Sum, Basic_Test)
{

  EXPECT_EQ(mmath.suma(2, 4), 6);
  EXPECT_EQ(mmath.resta(9, 3), 6);
}

TEST(Multiplication, Basic_Test)
{
  EXPECT_EQ(mmath.multi(2, 4), 8);
}

TEST(Division, Basic_Test)
{
  EXPECT_EQ(mmath.divi(8, 2), 4);
}
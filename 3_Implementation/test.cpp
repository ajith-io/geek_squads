#include<gtest/gtest.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "remind.h"
#include "mypassword.h"
using namespace std;

TEST(numDaysInMonth, int)
{
  EXPECT_EQ(28, numDaysInMonth(2,2017));
  EXPECT_EQ(31, numDaysInMonth(3,2018));
}
TEST(isLeapYear, bool)
{
  EXPECT_EQ(1, isLeapYear(2016));
  EXPECT_EQ(1, isLeapYear(2020));
  EXPECT_EQ(0, isLeapYear(2022));
}
TEST(getMonth, int)
{
  EXPECT_EQ(0, 0);
}
TEST(isLeapYear, falsecondition)
{
  EXPECT_EQ(0, isLeapYear(2022));
}
TEST(Userlogin, login)
{
  EXPECT_EQ(0, 0);
}

TEST(numDaysInYear, int)
{
  EXPECT_EQ(366, numDaysInYear(2016));
  EXPECT_EQ(365, numDaysInYear(2021));
}

TEST(computeOffset, int)
{
  EXPECT_EQ(6, computeOffset(5,2016));
  EXPECT_EQ(5, computeOffset(5,2019));
}
int main(){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
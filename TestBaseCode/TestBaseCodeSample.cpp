#include "../BaseCode/BaseCode.h"
#include "gtest/gtest.h"

TEST(TestBaseCode, Add_1_1_return_2)
{
	BaseCode baseCode;
	EXPECT_EQ(2,baseCode.Add(1,1));
}

TEST(TestBaseCode, Add_0_1_return_1)
{
	BaseCode baseCode;
	EXPECT_EQ(1,baseCode.Add(0,1));
}
#include "gtest/gtest.h"


int main(int argc, char ** argv)
{
	::testing::GTEST_FLAG(output) = "xml:./report_test.xml";
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
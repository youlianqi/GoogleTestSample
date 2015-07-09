#pragma once

#include "gtest/gtest.h"


class CLogAnalyzerTest : public testing::Test
{
public:
	CLogAnalyzerTest(void);
	~CLogAnalyzerTest(void);

	static void SetUpTestCase();
	static void TearDownTestCase();
	virtual void SetUp();
	virtual void TearDown();

};

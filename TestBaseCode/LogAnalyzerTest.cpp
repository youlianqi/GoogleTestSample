#include "LogAnalyzerTest.h"
#include "../BaseCode/LogAnalyzer.h"
#include "MockEmailService.h"
#include "StubWebService.h"
#include <string>

using namespace std;

CLogAnalyzerTest::CLogAnalyzerTest(void)
{
}

CLogAnalyzerTest::~CLogAnalyzerTest(void)
{
}

void CLogAnalyzerTest::SetUpTestCase()
{

}

void CLogAnalyzerTest::TearDownTestCase()
{

}

void CLogAnalyzerTest::SetUp() 
{

}

void CLogAnalyzerTest::TearDown() 
{

}

TEST(CLogAnalyzerTest, Analyze)
{
	StubWebService *stubWebService = new StubWebService();
	MockEmailService *mockEmailSender = new MockEmailService();

	LogAnalyzer log =  LogAnalyzer();
	log.setWebService(stubWebService);
	log.setEmailService(mockEmailSender);

	// Act
	string tooShortFileName = "1.txt";
	log.Analyze(tooShortFileName);

	// Assert
	EXPECT_EQ("to@test.com", mockEmailSender->To);
	EXPECT_EQ("from@test.com", mockEmailSender->From);
	EXPECT_EQ("WebSerive log error", mockEmailSender->Subject);
}

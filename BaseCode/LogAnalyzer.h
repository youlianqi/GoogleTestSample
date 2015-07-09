#pragma once

#include <string>
using namespace std;

class IWebService;
class IEmailService;

class LogAnalyzer
{
public:
	LogAnalyzer(void);
	~LogAnalyzer(void);

	void setWebService(IWebService* pWebService);
	IWebService* getWebService();

	void setEmailService(IEmailService* pEmailService);
	IEmailService* getEmailService();

	void Analyze(string fileName);


private:

	IWebService *m_pWebService;
	IEmailService *m_pEmailService;
};

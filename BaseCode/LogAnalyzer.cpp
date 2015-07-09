#include "StdAfx.h"
#include "LogAnalyzer.h"
#include "EmailService.h"
#include "WebService.h"
#include <exception>
using namespace std; 

LogAnalyzer::LogAnalyzer(void)
{
	m_pEmailService = NULL;
	m_pWebService = NULL;
}

LogAnalyzer::~LogAnalyzer(void)
{
	if (m_pEmailService)
	{
		delete m_pEmailService;
		m_pEmailService = NULL;
	}

	if (m_pWebService)
	{
		delete m_pWebService;
		m_pWebService = NULL;
	}
}

void LogAnalyzer::setWebService(IWebService* pWebService)
{
	m_pWebService = pWebService;
}

IWebService* LogAnalyzer::getWebService()
{
	return m_pWebService;
}

void LogAnalyzer::setEmailService(IEmailService* pEmailService)
{
	m_pEmailService = pEmailService;
}

IEmailService* LogAnalyzer::getEmailService()
{
	return m_pEmailService;
}

void LogAnalyzer::Analyze(string fileName)
{
	if (fileName.length() < 8)
	{
		try
		{
			m_pWebService->LogError("Filename too short:" + fileName);
		}
		catch (exception* e)
		{
			m_pEmailService->SendEmail("to@test.com", "from@test.com", "WebSerive log error",e->what());
		}
	}
}

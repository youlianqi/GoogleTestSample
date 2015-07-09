#pragma once
#include "../BaseCode/IEmailService.h"

class MockEmailService : public IEmailService
{
public:
	MockEmailService(void);
	~MockEmailService(void);

	void SendEmail(string to, string from, string subject, string message);

	string To;
	string From;
	string Subject;
	string Message;
};

#pragma once
#include "IEmailService.h"

class EmailService : public IEmailService
{
public:
	EmailService(void);
	~EmailService(void);

	void SendEmail(string to, string from, string subject, string message);
};

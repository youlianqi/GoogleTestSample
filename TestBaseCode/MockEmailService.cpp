#include "MockEmailService.h"

MockEmailService::MockEmailService(void)
{
}

MockEmailService::~MockEmailService(void)
{
}

void MockEmailService::SendEmail(string to, string from, string subject, string message)
{
	To = to;
	From = from;
	Subject = subject;
	Message = message;
}

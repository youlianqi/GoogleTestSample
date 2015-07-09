#pragma once
#include <string>
using namespace std;

class IEmailService
{
public:
	virtual	void SendEmail(string to, string from, string subject, string message) = 0;
}; 
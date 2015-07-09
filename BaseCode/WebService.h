#pragma once
#include "IWebService.h"

class WebService : public IWebService
{
public:
	WebService(void);
	~WebService(void);

	void LogError(string message);
};

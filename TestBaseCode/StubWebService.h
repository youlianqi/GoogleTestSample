#pragma once

#include "../BaseCode/IWebService.h"

class StubWebService : public IWebService
{
public:
	StubWebService(void);
	~StubWebService(void);

	void LogError(string message);
};

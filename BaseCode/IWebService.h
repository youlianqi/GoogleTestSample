#pragma once
#include <string>
using namespace std;

class IWebService
{
public:
	virtual	void LogError(string message) = 0;
};
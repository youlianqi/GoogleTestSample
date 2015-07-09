#include "StubWebService.h"
#include <exception>
using namespace std;

StubWebService::StubWebService(void)
{
}

StubWebService::~StubWebService(void)
{
}

void StubWebService::LogError(string message)
{
	throw new exception("StubWebService throw exception");
}

#pragma once
#include <combaseapi.h>

interface Observer
{
	virtual void Update(int t, int h, int p) = 0;
};

#pragma once
#include "Duck.h"

interface DecoyDuck :public Duck
{
	void display() override
	{
		cout << "[DecoyDuck]" << endl;
	}
};
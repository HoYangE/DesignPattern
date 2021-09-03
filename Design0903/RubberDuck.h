#pragma once
#include "Duck.h"

interface RubberDuck :public Duck
{
	void display() override
	{
		cout << "[RubberDuck]" << endl;
	}
};
#pragma once
#include "Duck.h"

interface RedheadDuck :public Duck
{
	void display() override
	{
		cout << "[RedheadDuck]" << endl;
	}
};
#pragma once
#include "Duck.h"

interface MallardDuck :public Duck
{
	void display() override
	{
		cout << "[MallardDuck]" << endl;
	}
};
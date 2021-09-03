#pragma once
#include <combaseapi.h>
#include <iostream>
using namespace std;

interface FlyBehavior
{
	virtual void fly() {};
};

interface FlyWithWings :public FlyBehavior
{
	void fly() override
	{
		cout << "ÆÛ´öÆÛ´ö" << endl;
	}
};

interface FlyNoWay :public FlyBehavior
{
	void fly() override
	{
		cout << "³ª´Â ¸ø³¯¾Æ" << endl;
	}
};

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
		cout << "�۴��۴�" << endl;
	}
};

interface FlyNoWay :public FlyBehavior
{
	void fly() override
	{
		cout << "���� ������" << endl;
	}
};

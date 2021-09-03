#pragma once
#include <combaseapi.h>
#include <iostream>
using namespace std;

interface QuackBehavior
{
	virtual void quack() {};
};

interface Quack :public QuackBehavior
{
	void quack() override
	{
		cout << "꽥꽥" << endl;
	}
};

interface Squack :public QuackBehavior
{
	void quack() override
	{
		cout << "꾸억꾸억" << endl;
	}
};

interface MuteQuack :public QuackBehavior
{
	void quack() override
	{
		cout << "나는 말을 못해" << endl;
	}
};
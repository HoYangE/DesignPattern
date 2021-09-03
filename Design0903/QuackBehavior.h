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
		cout << "�в�" << endl;
	}
};

interface Squack :public QuackBehavior
{
	void quack() override
	{
		cout << "�پ�پ�" << endl;
	}
};

interface MuteQuack :public QuackBehavior
{
	void quack() override
	{
		cout << "���� ���� ����" << endl;
	}
};
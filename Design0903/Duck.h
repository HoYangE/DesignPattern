#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
using namespace std;

class Duck
{
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;

public:
	Duck() { flyBehavior = nullptr; quackBehavior = nullptr; }
	~Duck() { delete flyBehavior; delete quackBehavior; }
	void swim() { cout << "ǳ��ǳ��" << endl; }
	virtual void display() { }
	void performQuack() { quackBehavior->quack(); }
	void performFly() { flyBehavior->fly(); }
	void setFlyBehavior(FlyBehavior* fly) { flyBehavior = fly; }
	void setQuackBehavior(QuackBehavior* quack) { quackBehavior = quack; }
};


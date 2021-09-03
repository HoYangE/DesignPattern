#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
using namespace std;

class Duck
{
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	Duck* duck;

public:
	Duck() {}
	~Duck() {}
	void swim() { cout << "Ç³µ¢Ç³µ¢" << endl; }
	virtual void display() { duck->display(); }
	void performQuack() { quackBehavior->quack(); }
	void performFly() { flyBehavior->fly(); }
	void setFlyBehavior(FlyBehavior* fly) { flyBehavior = fly; }
	void setQuackBehavior(QuackBehavior* quack) { quackBehavior = quack; }
};


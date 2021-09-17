#pragma once
#include <string>
#include "Pizza.h"

using namespace std;

class PizzaStore
{
public:
	PizzaStore(void){}
	~PizzaStore(void) {}

	Pizza* orderPizza(string type)
	{
		Pizza* pizza = createPizza(type);

		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}

	virtual Pizza* createPizza(string type) = 0;
};

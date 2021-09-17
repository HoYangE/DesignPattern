#pragma once
#include "PizzaStore.h"

class NYPizzaStore:public PizzaStore
{
public:
	NYPizzaStore(void){}
	~NYPizzaStore(void){}

	Pizza* createPizza(string item) {
		if (item == "cheese")
			return new NYStyleCheesePizza();

		return NULL;
	}
};


#pragma once
#include "PizzaStore.h"

class ChicagoPizzaStore :public PizzaStore
{
public:
	ChicagoPizzaStore(void) {}
	~ChicagoPizzaStore(void) {}

	Pizza* createPizza(string item) {
		if (item == "cheese")
			return new ChicagoStyleCheesePizza();

		return NULL;
	}
};

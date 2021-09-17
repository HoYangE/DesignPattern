#pragma once
#include "PizzaStore.h"

class CKPizzaStore :public PizzaStore
{
public:
	CKPizzaStore(void) {}
	~CKPizzaStore(void) {}

	Pizza* createPizza(string item) {
		if (item == "cheese")
			return new CKStyleCheesePizza();

		return NULL;
	}
};
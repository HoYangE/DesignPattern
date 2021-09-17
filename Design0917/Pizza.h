#pragma once
#include <string>
#include <list>
#include <iostream>

using namespace std;

class Pizza
{
	string name;
	string dough;
	string sauce;
	list<string> topping;

public:
	Pizza(void){}
	~Pizza(void) {}

	void prepare()
	{
		cout << "Preparing " << name << endl;
		cout << "Tossing dough ... " << dough << endl;
		cout << "Adding sauce ...  " << sauce << endl;
		cout << "Adding topping :  ";

		list<string>::iterator itr;
		for (itr = topping.begin(); itr != topping.end(); itr++)
			cout << " " << *itr;
		cout << endl;
	}

	void bake() { cout << "Bake for 25 minutes at 350" << endl; }
	void cut() { cout << "Cutting the pizza into diagonai slices" << endl; }
	void box() { cout << "Place pizza in official PizzaStore box" << endl; }
	string getName() { return name; }
	void setName(string set) { name = set; }
	void setDough(string set) { dough = set; }
	void setSauce(string set) { sauce = set; }
	void setTopping(string set) { topping.push_back(set); }

};

class NYStyleCheesePizza :public Pizza
{
public:
	NYStyleCheesePizza(void)
	{
		setName("NY Style Sauce and Cheese Pizza");
		setDough("Thin Crust Dough");
		setSauce("Marinara Sauce");
		setTopping("Grated Reggiano Cheese");
	}
	~NYStyleCheesePizza(void) {}
};


class ChicagoStyleCheesePizza :public Pizza
{
public:
	ChicagoStyleCheesePizza(void)
	{
		setName("Chicago Style Sauce and Cheese Pizza");
		setDough("Thin Crust Dough");
		setSauce("Marinara Sauce");
		setTopping("Grated Reggiano Cheese");
	}
	~ChicagoStyleCheesePizza(void) {}
};

class CKStyleCheesePizza :public Pizza
{
public:
	CKStyleCheesePizza(void)
	{
		setName("CK Style Sauce and Cheese Pizza");
		setDough("Thin Crust Dough");
		setSauce("Marinara Sauce");
		setTopping("Grated Reggiano Cheese");
	}
	~CKStyleCheesePizza(void) {}
};
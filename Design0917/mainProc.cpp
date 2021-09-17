#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "CKPizzaStore.h"
#include "Pizza.h"

int main()
{
	PizzaStore* nyStore = new NYPizzaStore();
	PizzaStore* ChicagoStore = new ChicagoPizzaStore();
	PizzaStore* CKStore = new CKPizzaStore();
	
	Pizza* pizza = nyStore->orderPizza("cheese");
	cout << "NYPD ordered a " << pizza->getName() << endl;

	pizza = ChicagoStore->orderPizza("cheese");
	cout << "Chicago ordered a " << pizza->getName() << endl;

	pizza = CKStore->orderPizza("cheese");
	cout << "CK ordered a " << pizza->getName() << endl;

	return 0;
}
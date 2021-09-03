#include "Duck.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

int main()
{
	FlyBehavior* Dofly = new FlyWithWings();
	FlyBehavior* Cantfly = new FlyNoWay();
	QuackBehavior* DoQuack = new Quack();
	QuackBehavior* DoSquack = new Squack();
	QuackBehavior* CantSquack = new MuteQuack();

	Duck* mallard = new MallardDuck();
	Duck* redhead = new RedheadDuck();
	Duck* rubber = new RubberDuck();
	Duck* decoy = new DecoyDuck();

	mallard->display();
	mallard->setFlyBehavior(Dofly);
	mallard->setQuackBehavior(DoQuack);
	mallard->performFly();
	mallard->performQuack();

	redhead->display();
	redhead->setFlyBehavior(Dofly);
	redhead->setQuackBehavior(DoQuack);
	redhead->performFly();
	redhead->performQuack();

	rubber->display();
	rubber->setFlyBehavior(Cantfly);
	rubber->setQuackBehavior(DoSquack);
	rubber->performFly();
	rubber->performQuack();

	decoy->display();
	decoy->setFlyBehavior(Cantfly);
	decoy->setQuackBehavior(CantSquack);
	decoy->performFly();
	decoy->performQuack();

	return 0;
}
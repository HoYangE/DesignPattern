#include "Duck.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

int main()
{
	Duck* mallard = new MallardDuck();
	mallard->display();
	mallard->setFlyBehavior(new FlyWithWings());
	mallard->setQuackBehavior(new Quack());
	mallard->performFly();
	mallard->performQuack();
	delete mallard;

	Duck* redhead = new RedheadDuck();
	redhead->display();
	redhead->setFlyBehavior(new FlyWithWings());
	redhead->setQuackBehavior(new Quack());
	redhead->performFly();
	redhead->performQuack();
	delete redhead;

	Duck* rubber = new RubberDuck();
	rubber->display();
	rubber->setFlyBehavior(new FlyNoWay());
	rubber->setQuackBehavior(new Quack());
	rubber->performFly();
	rubber->performQuack();
	delete rubber;

	Duck* decoy = new DecoyDuck();
	decoy->display();
	decoy->setFlyBehavior(new FlyNoWay());
	decoy->setQuackBehavior(new MuteQuack());
	decoy->performFly();
	decoy->performQuack();
	delete decoy;

	return 0;
}
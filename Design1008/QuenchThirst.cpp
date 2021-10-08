#include "QuenchThirst.h"
#include "BaseGameEntity.h"
#include <iostream>
using namespace std;

QuenchThirst* QuenchThirst::getInstance()
{
    static QuenchThirst* instance;
    if (instance == nullptr)
        instance = new QuenchThirst();
    return instance;
}

void QuenchThirst::Enter(BaseGameEntity* curState)
{
    cout << "������ �����ϴ�." << endl;
    curState->setLocation(bar);
}

#include "EnterMineAndDigForNugget.h"
void QuenchThirst::Execute(BaseGameEntity* curState)
{
    cout << curState->getName() << curState->getLocation() << endl;

    curState->setWater(-curState->getWater());
    curState->setMoney(-5);
    curState->ChangeState(EnterMineAndDigForNugget::getInstance());
}

void QuenchThirst::Exit(BaseGameEntity* curState)
{
    cout << "�������� �������ϴ�." << endl;
}

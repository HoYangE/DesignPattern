#include "EnterMineAndDigForNugget.h"
#include "BaseGameEntity.h"
#include <iostream>
using namespace std;

EnterMineAndDigForNugget* EnterMineAndDigForNugget::getInstance()
{
    static EnterMineAndDigForNugget* instance;
    if (instance == nullptr)
        instance = new EnterMineAndDigForNugget();
    return instance;
}

void EnterMineAndDigForNugget::Enter(BaseGameEntity* curState)
{
    cout << "±¤»ê¿¡ µé¾î°¬½À´Ï´Ù." << endl;
    curState->setLocation(mine);
}

#include"VisitBankAndDepositGold.h"
#include"QuenchThirst.h"
void EnterMineAndDigForNugget::Execute(BaseGameEntity* curState)
{
    cout << curState->getName() << curState->getLocation() << endl;

    curState->setGold(2);
    if (curState->getGold() >= 10)
        curState->ChangeState(VisitBankAndDepositGold::getInstance());
    if(curState->getWater() >= 15)
        curState->ChangeState(QuenchThirst::getInstance());
}

void EnterMineAndDigForNugget::Exit(BaseGameEntity* curState)
{
    cout << "±¤»ê¿¡¼­ ³ª°¬½À´Ï´Ù." << endl;
}

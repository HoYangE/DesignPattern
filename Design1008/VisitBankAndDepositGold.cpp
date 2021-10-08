#include "VisitBankAndDepositGold.h"
#include "BaseGameEntity.h"
#include <iostream>
using namespace std;

VisitBankAndDepositGold* VisitBankAndDepositGold::getInstance()
{
    static VisitBankAndDepositGold* instance;
    if (instance == nullptr)
        instance = new VisitBankAndDepositGold();
    return instance;
}

void VisitBankAndDepositGold::Enter(BaseGameEntity* curState)
{
    cout << "���࿡ �����ϴ�." << endl;
    curState->setLocation(bank);
}
#include "EnterMineAndDigForNugget.h"
#include "GoHomeAndSleepTilRested.h"
void VisitBankAndDepositGold::Execute(BaseGameEntity* curState)
{
    cout << curState->getName()<< curState->getLocation()<< endl;
    curState->setMoney(curState->getGold());
    curState->setGold(-curState->getGold());
    if(curState->getMoney() >= 20)
        curState->ChangeState(GoHomeAndSleepTilRested::getInstance());
    else
        curState->ChangeState(EnterMineAndDigForNugget::getInstance());
}

void VisitBankAndDepositGold::Exit(BaseGameEntity* curState)
{
    cout << "���࿡�� �������ϴ�." << endl;
}

#include "GoHomeAndSleepTilRested.h"
#include "BaseGameEntity.h"
#include <iostream>
using namespace std;

GoHomeAndSleepTilRested* GoHomeAndSleepTilRested::getInstance()
{
    static GoHomeAndSleepTilRested* instance;
    if (instance == nullptr)
        instance = new GoHomeAndSleepTilRested();
    return instance;
}

void GoHomeAndSleepTilRested::Enter(BaseGameEntity* curState)
{
    cout << "ħ�뿡 �����ϴ�." << endl;
    curState->setLocation(home);
}

#include "EnterMineAndDigForNugget.h"
void GoHomeAndSleepTilRested::Execute(BaseGameEntity* curState)
{
    cout << curState->getName() << curState->getLocation() << endl;

    curState->setHp(-curState->getHp());
    curState->ChangeState(EnterMineAndDigForNugget::getInstance());
}

void GoHomeAndSleepTilRested::Exit(BaseGameEntity* curState)
{
    cout << "ħ�뿡�� �������ϴ�." << endl;
}

#pragma once
#include "State.h"

class GoHomeAndSleepTilRested :
    public State
{
public:
    static GoHomeAndSleepTilRested* getInstance();
    void Enter(BaseGameEntity* curState);
    void Execute(BaseGameEntity* curState);
    void Exit(BaseGameEntity* curState);
};


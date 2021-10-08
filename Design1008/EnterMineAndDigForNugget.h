#pragma once
#include "State.h"

class BaseGameEntity;

class EnterMineAndDigForNugget :
    public State
{
public:
    static EnterMineAndDigForNugget* getInstance();
    void Enter(BaseGameEntity* curState);
    void Execute(BaseGameEntity* curState);
    void Exit(BaseGameEntity* curState);
};


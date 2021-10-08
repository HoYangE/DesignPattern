#pragma once
#include "State.h"

class QuenchThirst :
    public State
{
public:
    static QuenchThirst* getInstance();
    void Enter(BaseGameEntity* curState);
    void Execute(BaseGameEntity* curState);
    void Exit(BaseGameEntity* curState);
};


#pragma once
#include "State.h"

class VisitBankAndDepositGold :
    public State
{
public:
    static VisitBankAndDepositGold* getInstance();
    void Enter(BaseGameEntity* curState);
    void Execute(BaseGameEntity* curState);
    void Exit(BaseGameEntity* curState);
};


#pragma once
#include "BaseGameEntity.h"
#include "State.h"
#include "EnterMineAndDigForNugget.h"


class State;

class Miner :
    public BaseGameEntity
{
    State* m_state;
    location m_location;
    int gold;
    int money;
    int water;
    int hp;
public:
    Miner(string name) :BaseGameEntity(name), m_state(EnterMineAndDigForNugget::getInstance()), m_location(mine), gold(0), money(0), water(0),hp(0){ m_state->Enter(this); }
    void Update();
    void ChangeState(State* newState);
    location getLocation();
    int getGold();
    int getMoney();
    int getWater();
    int getHp();
    void setLocation(location val);
    void setGold(int val);
    void setMoney(int val);
    void setWater(int val);
    void setHp(int val);
};


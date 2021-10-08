#pragma once
#include <string>
using namespace std;

enum location {
    home,
    mine,
    bar,
    bank
};

class State;

class BaseGameEntity
{
	string m_name;
public:
	BaseGameEntity(string name):m_name(name){}
	virtual void Update() = 0;
	virtual void ChangeState(State* newState) = 0;
    virtual location getLocation() = 0;
    virtual int getGold() = 0;
    virtual int getMoney() = 0;
    virtual int getWater() = 0;
    virtual int getHp() = 0;
    virtual void setLocation(location val) = 0;
    virtual void setGold(int val) = 0;
    virtual void setMoney(int val) = 0;
    virtual void setWater(int val) = 0;
    virtual void setHp(int val) = 0;

	string getName() { return m_name; }
};


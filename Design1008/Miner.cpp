#include "Miner.h"
#include "State.h"

void Miner::Update()
{
	water += 1;
	m_state->Execute(this);
}

void Miner::ChangeState(State* newState)
{
	m_state->Exit(this);
	m_state = newState;
	m_state->Enter(this);
}

location Miner::getLocation()
{
	return m_location;
}

int Miner::getGold()
{
	return gold;
}

int Miner::getMoney()
{
	return money;
}

int Miner::getWater()
{
	return water;
}

int Miner::getHp()
{
	return hp;
}

void Miner::setLocation(location val)
{
	m_location = val;
}

void Miner::setGold(int val)
{
	gold += val;
}

void Miner::setMoney(int val)
{
	money += val;

}

void Miner::setWater(int val)
{
	water += val;

}

void Miner::setHp(int val)
{
	hp += val;

}

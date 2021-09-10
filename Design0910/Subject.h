#pragma once
#include <combaseapi.h>
#include "Observer.h"
using namespace std;

interface Subject
{
	virtual void registerObserver(Observer* observer) = 0;
	virtual void removeObserver(Observer* observer) = 0;
	virtual void notifyObserver() = 0;
};

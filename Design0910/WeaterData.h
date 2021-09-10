#pragma once
#include <vector>
#include "Subject.h"
class weatherData :public Subject
{
	vector<Observer*> observerVector;
	int Temperature;
	int humidity;
	int pressure;

public:

	void registerObserver(Observer* observer) { observerVector.push_back(observer); };
	void removeObserver(Observer* observer) 
	{
		vector<Observer*>::iterator iter;
		iter = find(observerVector.begin(), observerVector.end(), observer);
		if (iter != observerVector.end()) observerVector.erase(iter);
	};
	void notifyObserver() 
	{
		vector<Observer*>::iterator iter = observerVector.begin();
		for (; iter != observerVector.end(); iter++) { Observer* myObserver = *iter; myObserver->Update(Temperature, humidity, pressure); }
	};
	
	int getTemperature() { return Temperature; };
	int getHumidity() { return humidity; };
	int getPressure() { return pressure; };
	void measurementChanged() { notifyObserver(); };
	void setMeasurements(int t, int h, int p) { Temperature = t; humidity = h; pressure = p; measurementChanged(); };
};

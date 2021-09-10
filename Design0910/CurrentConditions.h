#pragma once
#include<iostream>
#include "Observer.h"
#include "DisplayElements.h"
#include "WeaterData.h"
#include "Subject.h"
using namespace std;

class CurrentConditions :public Observer,public DisplayElements
{
	int Temperature;
	int humidity;
	int pressure;
	weatherData* myWeatherData;

public:

	CurrentConditions(weatherData* weatherDatas) {
		Temperature = 0;
		humidity = 0;
		pressure = 0;
		myWeatherData = weatherDatas; 
		myWeatherData->registerObserver(this);
	};

	void Update(int t, int h, int p) { Temperature = t; humidity = h; pressure = p; display(); };
	void display() override
	{
		cout << "Current conditions : "<< Temperature << "F degress and " << humidity << " humidity"<<endl;
	};
};

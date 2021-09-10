#pragma once
#include<iostream>
#include "Observer.h"
#include "DisplayElements.h"
#include "WeaterData.h"
using namespace std;

class ForecastDisplay :public Observer, public DisplayElements
{
	int Temperature;
	int humidity;
	int pressure;
	weatherData* myWeatherData;

public:

	ForecastDisplay(weatherData* weatherDatas) {
		Temperature = 0;
		humidity = 0;
		pressure = 0;
		myWeatherData = weatherDatas;
		myWeatherData->registerObserver(this);
	};

	void Update(int t, int h, int p) { Temperature = t; humidity = h; pressure = p; display(); };
	void display() override
	{
		if (humidity >= 70)
			cout << "Forecast : rainy whather" << endl;
		else if (humidity >= 40)
			cout << "Forecast : wet whather" << endl;
		else
			cout << "Forecast : dried whather" << endl;
	};
};

#pragma once
#include<iostream>
#include<vector>
#include "Observer.h"
#include "DisplayElements.h"
#include "WeaterData.h"
using namespace std;

class StatisticDisplay :public Observer, public DisplayElements
{
	int Temperature;
	int humidity;
	int pressure;

	int max;
	int min;
	int size;
	vector<int> avg;

	weatherData* myWeatherData;

public:

	StatisticDisplay(weatherData* weatherDatas) {
		Temperature = 0;
		humidity = 0;
		pressure = 0;
		max = INT_MIN;
		min = INT_MAX;
		size = 0;
		myWeatherData = weatherDatas;
		myWeatherData->registerObserver(this);
	};

	void Update(int t, int h, int p) { Temperature = t; humidity = h; pressure = p; if (t > max)max = t; if (t < min)min = t; size++; avg.push_back(t); display(); };
	void display() override
	{
		int curavg = 0;
		for (int i = 0; i < avg.size(); i++) curavg += avg[i];
		cout << "Avg/Max/Min temperature : " << curavg/size << "/" << max << "/" << min << endl;
	};
};

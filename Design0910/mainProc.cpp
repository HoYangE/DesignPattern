#include"Subject.h"
#include"WeaterData.h"
#include"CurrentConditions.h"
#include"ForecastDisplay.h"
#include"StatisticDisplay.h"

void main()
{
	weatherData* weatherDatas = new weatherData();
	CurrentConditions* currentDisplays = new CurrentConditions(weatherDatas);
	ForecastDisplay* forecastDisplays = new ForecastDisplay(weatherDatas);
	StatisticDisplay* statisticDisplays = new StatisticDisplay(weatherDatas);

	weatherDatas->setMeasurements(80, 65, 30);
	weatherDatas->setMeasurements(82, 70, 29);
	weatherDatas->setMeasurements(78, 90, 29);
	weatherDatas->setMeasurements(10, 10, 10);

}
#pragma once
#include "Weather.h"

using namespace std;
class WeatherCalendar
{

private:

	int amount;
	Weather** weathers;

public:

	WeatherCalendar(int amount)
	{
		this->amount = amount;
		weathers = new Weather * [amount + 1]();
	}
	~WeatherCalendar()
	{
		delete[] weathers;
	}
	int i = 0;
	void AddWeather(Weather* weather);
	friend int GetAmount(WeatherCalendar*);
	Weather** GetWeathers(void)
	{
		return weathers;
	}
};
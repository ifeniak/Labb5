#pragma once
#include <vector>
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
		weathers = new Weather*[amount + 1]();
	}
	~WeatherCalendar()
	{
		delete[] weathers;
	}
	int i = 0;
	void AddWeather(Weather* weather);

	friend int getAmount(WeatherCalendar*);

	Weather** getWeathers(void)
	{
		return weathers;
	}

	

	

};




/*private:
	vector < Weather > weathers;
public:
	void AddWeather(Weather weather)
	{
		this->weathers.push_back(weather);
	}*/
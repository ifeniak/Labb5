#pragma once
#include "string"

using namespace std;

enum Type
{
	SUNNY,
	CLOUDY,
	RAINY,
	FOGGY
};

class Weather
{

private:
	int day;
	string city;
	string country;
	int temp;
	int humidity;
	int wind_speed;

	Type type;

public:

	Weather() {}
	Weather(int day, string city, string country, int temp, int humidity, int wind_speed)
	{
		this->day = day;
		this->city = city;
		this->country = country;
		this->temp = temp;
		this->humidity = humidity;
		this->wind_speed = wind_speed;
	}
	~Weather() {};
	int GetDay(void);
	string GetCity(void);
	string GetCountry(void);
	int GetTemp(void);
	int GetHumidity(void);
	int GetWind_speed(void);

	void IsLvivWeather(int humidity, int type);
	friend void FindMaxTemperature(Weather** weather, int day);
	friend void SortByDay(Weather** arr, int len);
};
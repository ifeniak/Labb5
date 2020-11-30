#pragma once
#include "string"
#include "iostream"

using namespace std;

enum TYPE
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

	TYPE type;
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
	int getDay(void);
	string getCity(void);
	string getCountry(void);
	int getTemp(void);
	int getHumidity(void);
	int getWind_speed(void);
	
	void isLvivWeather(int humidity, int type);
	friend void findMaxTemperature(Weather** weather, int day);
	friend void SortByDay(Weather** arr, int len);
};

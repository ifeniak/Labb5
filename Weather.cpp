#include "Weather.h"
#define ON 1
#define OFF 0

int Weather::getDay(void)
{
	return day;
}
string Weather::getCity(void)
{
	return city;
}
string Weather::getCountry(void)
{
	return country;
}
int Weather::getTemp(void)
{
	return temp;
}
int Weather::getHumidity(void)
{
	return humidity;
}
int Weather::getWind_speed(void)
{
	return wind_speed;
}

void Weather::isLvivWeather(int humidity, int type)
{
	if (humidity > 80 && type == RAINY)
		cout << "The typical day in Lviv" << endl;
	else
		cout << "You're lucky, man" << endl;
}

void findMaxTemperature(Weather** weathers, int day)
{
	int amount = 0;
	Weather** ptr = weathers;
	while (*ptr != NULL) {
		amount++;
		ptr++;
	}

	SortByDay(weathers, amount);
	int temp;
	int checker = OFF;
	for (int i = 0; i < amount; i++)
	{
		if (weathers[i]->getDay() == day)
		{
			if (checker == OFF)
			{
				checker = ON;
				temp = weathers[i]->getTemp();
			}
			else if (weathers[i]->getTemp() > temp)
				temp = weathers[i]->getTemp();
		}
	}
	if (checker)
		cout << "Today max temperature is:" << temp << endl;
	else
		cout << "No data" << endl;
}

void  SortByDay(Weather** arr, int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j]->getDay() < arr[j + 1]->getDay())
			{
				Weather* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



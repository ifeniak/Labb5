#include "Weather.h"
#include <iostream>
#define ON 1
#define OFF 0

int Weather::GetDay(void)
{
	return day;
}
string Weather::GetCity(void)
{
	return city;
}
string Weather::GetCountry(void)
{
	return country;
}
int Weather::GetTemp(void)
{
	return temp;
}
int Weather::GetHumidity(void)
{
	return humidity;
}
int Weather::GetWind_speed(void)
{
	return wind_speed;
}

void Weather::IsLvivWeather(int humidity, int type)
{
	if (humidity > 80 && type == RAINY)
		cout << "The typical day in Lviv" << endl;
	else
		cout << "You're lucky, man" << endl;
}

void FindMaxTemperature(Weather** weathers, int day)
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
		if (weathers[i]->GetDay() == day)
		{
			if (checker == OFF)
			{
				checker = ON;
				temp = weathers[i]->GetTemp();
			}
			else if (weathers[i]->GetTemp() > temp)
				temp = weathers[i]->GetTemp();
		}
	}
	if (checker)
		cout << "Today max temperature is:" << temp << endl;
	else
		cout << "No data" << endl;
}

void  SortByDay(Weather** arr, int length)
{
	for (int i = 1; i < length; i++)
	{
		for (int j = 0; j < length - i; j++)
		{
			if (arr[j]->GetDay() < arr[j + 1]->GetDay())
			{
				Weather* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
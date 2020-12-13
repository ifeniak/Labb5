#include <iostream>
#include "Weather.h"
#include "WeatherCalendar.h"

int main()
{
    int weather_number = 4;
    WeatherCalendar Cal(weather_number);
    Weather *weather1 = new Weather(1, "Lviv", "qd", 17, 94, 0);
    Weather *weather2 = new Weather(3, "Oslo", "qdr", 25, 57, 7);
    Weather *weather3 = new Weather(3, "Toronto", "qttd", 12, 25, 15);
    Weather *weather4 = new Weather(2, "Hanover", "qde", 7, 11, 22);

    Cal.AddWeather(weather1);
    Cal.AddWeather(weather2);
    Cal.AddWeather(weather3);
    Cal.AddWeather(weather4);

    FindMaxTemperature(Cal.GetWeathers(), 3);
    weather3->IsLvivWeather(89, RAINY);
}
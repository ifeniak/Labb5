#include <iostream>
#include "Weather.h"
#include "WeatherCalendar.h"

int main()
{
    int n = 4;
    WeatherCalendar Cal(n);
    Weather *a1 = new Weather(1, "qw", "qd", 2, 5, 5);
    Weather *a2 = new Weather(3, "qw", "qdr", 2, 5, 5);
    Weather *a3 = new Weather(3, "qw", "qttd", 34, 5, 5);
    Weather *a4 = new Weather(2, "qw", "qde", 2, 5, 5);

    Cal.AddWeather(a1);
    Cal.AddWeather(a2);
    Cal.AddWeather(a3);
    Cal.AddWeather(a4);

    findMaxTemperature(Cal.getWeathers(), 3);
       

    a3->isLvivWeather(89, RAINY);
    std::cout << "Hello World!\n";
}
#include "WeatherCalendar.h"

void WeatherCalendar::AddWeather(Weather* weather)
{
	Weather** ptr = weathers;
	while (*ptr != NULL)
		(ptr)++;
	*ptr = weather;
}
#include "CurrentConditionsDisplay.h"
#include <iostream>

void CurrentConditionsDisplay::update(float& _temp, float& _humidity, float& _pressure)
{
	temperature = _temp;
	humidity = _humidity;
	Display();
}

void CurrentConditionsDisplay::Display()
{
	std::cout << "Current Condition Display: " << temperature << "°C and " << humidity << "% humidity" << std::endl;
}

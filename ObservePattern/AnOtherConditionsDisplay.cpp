#include "AnOtherConditionsDisplay.h"
#include <iostream>

void AnOtherConditionsDisplay::update(float& _temp, float& _humidity, float& _pressure)
{
	temperature = _temp*3;
	humidity = _humidity*3;
	Display();
}

void AnOtherConditionsDisplay::Display()
{
	std::cout << "An Other Condition Display: " << temperature << "°C and " << humidity << "% humidity" << std::endl;
}

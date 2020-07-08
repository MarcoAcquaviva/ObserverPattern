#include "WeatherData.h"

void WeatherData::RegisterObserved(Observed* o)
{
	auto itemFound = std::find(observedList.begin(), observedList.end(), o);
		if (itemFound == observedList.end()) {
			observedList.push_back(o);
	}
}

void WeatherData::RemoveObserved(Observed* o)
{
	observedList.erase(
		std::remove(observedList.begin(), observedList.end(), o),
		observedList.end()
	);
}

void WeatherData::notifyObservers()
{
	for (auto observer : observedList) {
		observer->update(temperature,humidtity,pressure);
	}
}

void WeatherData::mesuramentChanged()
{
	notifyObservers();
}

void WeatherData::setMesurament(float&& temp, float&& _humidity, float&& _pressure)
{
	temperature = temp;
	humidtity = _humidity;
	pressure = _pressure;
	mesuramentChanged();
}

#pragma once
#include "Subject.h"
#include "Observed.h"
#include <vector>
#include <algorithm>

class WeatherData : public Subject
{
	std::vector<Observed*> observedList;
	float temperature, humidtity, pressure;

public:
	WeatherData() : observedList(), temperature(),humidtity(),pressure() {};
	void RegisterObserved(Observed*) override;
	void RemoveObserved(Observed*) override;
	void notifyObservers() override;

private:
	void mesuramentChanged();
public:
	void setMesurament(float&&, float&&, float&&);
};


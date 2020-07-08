#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "AnOtherConditionsDisplay.h"

int main()
{
	WeatherData* subject = new WeatherData();
	CurrentConditionsDisplay* currentConditionsDisplay = new CurrentConditionsDisplay(subject) ;
	AnOtherConditionsDisplay anOtherConditionsDisplay{ std::move(AnOtherConditionsDisplay(subject)) };

	subject->setMesurament(10, 10, 20);
	subject->setMesurament(20, 30, 10);
	subject->setMesurament(5, 3, 20);


	return 0;
}

#pragma once

#include "Observed.h"
#include "DisplayElement.h"
#include "Subject.h"
class AnOtherConditionsDisplay : public Observed, DisplayElement
{

	float temperature, humidity;
	Subject* subjectNotifier;

public:
	AnOtherConditionsDisplay(Subject* _Notifier) : subjectNotifier{ _Notifier }, temperature(), humidity(){
		subjectNotifier->RegisterObserved(this); 
	}

	void update(float& temp, float& humidity, float& pressure) override;

	void Display() override;
};


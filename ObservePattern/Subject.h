#pragma once
class Observed;

class Subject {
public:
	virtual void RegisterObserved(Observed* o) = 0;
	virtual void RemoveObserved(Observed* o) = 0;
	virtual void notifyObservers() = 0;
};
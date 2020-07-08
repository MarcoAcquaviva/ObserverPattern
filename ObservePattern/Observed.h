#pragma once
class Observed {
public:
	virtual void update(float& temp, float& humidity, float& pressure) = 0;
};
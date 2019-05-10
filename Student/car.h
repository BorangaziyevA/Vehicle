#pragma once
#include"groundVehicle.h"
class car :public groundVehicle
{
	string engineType;
	string mark;
public:
	car(string engineType, string mark, int wheelRadius, string color, int maxSpeed, int cntPass)
		:groundVehicle(wheelRadius, color, maxSpeed, cntPass)
	{
		setEngine(engineType);
		setMark(mark);
	}
	string getEngine() { return engineType; }
	string getMark() { return mark; }
	void setEngine(string x) { this->engineType = x; }
	void setMark(string x) { this->mark = x; }
	void start() { cout << "car is ready" << endl; }
};
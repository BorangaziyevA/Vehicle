#pragma once
#include"groundVehicle.h"

class bike :public groundVehicle
{
	string mark;
	string type;
public:
	bike(string type, string mark, int wheelRadius, string color, int maxSpeed, int cntPass)
		:groundVehicle(wheelRadius, color, maxSpeed, cntPass)
	{
		setType(type);
		setMark(mark);
	}
	string getMark() { return mark; }
	string getType() { return type; }
	void setMark(string mark) { this->mark = mark; }
	void setType(string type) { this->type = type; }
	void start() { cout << "bike is ready" << endl; }
};

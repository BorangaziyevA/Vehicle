#pragma once
#include"airVehicle.h"

class plane : public airVehicle
{
	string type;
	int wingLength;
public:
	plane(string type, int wingLength, string cabin, string color, int maxSpeed, int cntPass)
		:airVehicle(cabin, color, maxSpeed, cntPass)
	{
		setType(type);
		setLength(wingLength);
	}
	void setType(string type) { this->type = type; }
	void setLength(int wing) { this->wingLength = wing; }
	string getType() { return type; }
	int getWingL() { return this->wingLength; }
	void start() { cout << "plane is ready" << endl; }
};
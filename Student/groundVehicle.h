#pragma once
#include"vehicle.h"
class groundVehicle : public vehicle
{
	int wheelRadius;
public:
	groundVehicle(int wheelRadius, string color, int maxSpeed, int cntPass)
		:vehicle(color, maxSpeed, cntPass)
	{
		setWheelR(wheelRadius);
	}
	void setWheelR(int x) { this->wheelRadius = x; }
	int getWheelR() { return this->wheelRadius; }
	void start() { cout << "Ground vehicle is ready" << endl; }
};
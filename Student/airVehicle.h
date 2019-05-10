#pragma once
#include"vehicle.h"
class airVehicle :public vehicle
{
	string cabin;
public:
	airVehicle(string cabin, string color, int maxSpeed, int cntPass)
		:vehicle(color, maxSpeed, cntPass)
	{
		setCabin(cabin);
	}
	string getCabin() { return cabin; }
	void setCabin(string cabin) { this->cabin = cabin; }
	void start() { cout << "Air vehicle is ready" << endl; }
};
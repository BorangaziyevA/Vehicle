#pragma once
#include"waterVehicle.h"

class ship : public waterVehicle
{
	int cntMast;
public:
	ship(int mast, int length, int width, string color, int maxSpeed, int cntPass)
		:waterVehicle(length, width, color, maxSpeed, cntPass)
	{
		setCntMast(mast);
	}
	int getCntMast() { return cntMast; }
	void setCntMast(int mast) { this->cntMast = mast; }
	void start() { cout << "ship is ready" << endl; }
};
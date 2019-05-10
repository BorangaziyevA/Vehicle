#pragma once
#include"waterVehicle.h"

class helicopter :public airVehicle
{
	int cntBlade;
public:
	helicopter(int cntBlade, string cabin, string color, int maxSpeed, int cntPass)
		:airVehicle(cabin, color, maxSpeed, cntPass)
	{
		setCntB(cntBlade);
	}
	void setCntB(int x) { cntBlade = x; }
	int getCntB() { return cntBlade; }
	void start() { cout << "Helicopter is ready" << endl; }
};
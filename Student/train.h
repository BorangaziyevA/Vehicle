#pragma once
#include"groundVehicle.h"
class train :public groundVehicle
{
	int cntCarrieage;
public:
	train(int cntCarrieage, int wheelRadius, string color, int maxSpeed, int cntPass)
		:groundVehicle(wheelRadius, color, maxSpeed, cntPass)
	{
		setCntCarr(cntCarrieage);
	}
	int getCntCarr() { return cntCarrieage; }
	void setCntCarr(int x) { this->cntCarrieage = x; }
	void start() { cout << "Train is ready" << endl; }
};
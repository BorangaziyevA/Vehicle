#pragma once
#include"waterVehicle.h"
class submarine :public waterVehicle
{
	int depth;
public:
	submarine(int depth, int length, int width, string color, int maxSpeed, int cntPass)
		:waterVehicle(length, width, color, maxSpeed, cntPass)
	{
		setDepth(depth);
	}
	void setDepth(int depth) { this->depth = depth; }
	int getDepth() { return depth; }
	void start() { cout << "submarine is ready" << endl; };
};
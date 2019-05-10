#pragma once
#include"vehicle.h"
class waterVehicle : public vehicle
{
	int length;
	int width;
public:
	waterVehicle(int length, int width, string color, int maxSpeed, int cntPass)
		:vehicle(color, maxSpeed, cntPass)
	{
		setLength(length);
		setWidth(width);
	}
	void setLength(int x) { this->length = x; }
	int getLength() { return this->length; }
	void setWidth(int x) { this->width = x; }
	int getWidth() { return this->width; }
	void start() { cout << "Water vehicle is ready" << endl; }
};
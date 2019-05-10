#pragma once
#include"waterVehicle.h"
class boat :public waterVehicle
{
	bool enginePresent;
	string material;
public:
	boat(string material, bool enginePresent, int length, int width, string color, int maxSpeed, int cntPass)
		:waterVehicle(length, width, color, maxSpeed, cntPass)
	{
		setEngine(enginePresent);
		setMaterial(material);
	}
	void setEngine(bool x) { this->enginePresent = x; }
	void setMaterial(string x) { this->material = x; }
	bool getEngine() { return this->enginePresent; }
	string getMaterial() { return this->material; }
	void start() { cout << "boat is ready" << endl; }
};
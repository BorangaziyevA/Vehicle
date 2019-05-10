#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;

class vehicle
{
	string color;
	int maxSpeed;
	int cntPass;
public:

	vehicle(string color, int maxSpeed, int cntPass)
	{
		this->color = color;
		this->maxSpeed = maxSpeed;
		this->cntPass = cntPass;
	}

	string getColor() { return color; }
	int getSpeed() { return maxSpeed; }
	int getCntPass() { return cntPass; }
	void setColor(string color) { this->color = color; }
	void setSpeed(int speed) { this->maxSpeed = speed; }
	void setCntPass(int cnt) { this->cntPass = cnt; }
	void start() { cout << "Vehicle is ready" << endl; }

};
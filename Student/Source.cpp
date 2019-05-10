#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"ship.h"
using namespace std;

void main()
{
	ship a(5, 10, 3, "yellow", 10, 7);

	cout << a.getCntMast() << " " << a.getCntPass() << " " << a.getColor() << " " << a.getLength() << " " << a.getSpeed() << " " << a.getWidth() << endl;



	system("pause");
}
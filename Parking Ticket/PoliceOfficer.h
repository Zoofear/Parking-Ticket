#pragma once
#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

class PoliceOfficer
{
public:

	//Constructor

	PoliceOfficer(string b = "BADGE") : badge(b) {}

	//Functions

	void setParkedCarPointer(ParkedCar* x)
	{
		obj = x;
	}

	void determinTicket()
	{
		if (obj != nullptr)
		{
			cout << obj->returnMinsParked() << endl;
		}
	}

private:
	string badge;
	ParkedCar* obj = nullptr;
}
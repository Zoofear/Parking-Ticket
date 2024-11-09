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

	PoliceOfficer(string n = "NAME", string b = "BADGE") : name(n), badge(b) {}

	//Functions

	void setParkedCarPointer(ParkedCar* x)
	{
		obj1 = x;
	}

	void setParkingMeterPointer(ParkingMeter* x)
	{
		obj2 = x;
	}

	int determinTicket()
	{

		if (obj1 != nullptr && obj2 != nullptr)
		{
			int parked = obj1->returnMinsParked();

			int timebought = obj2->returnTimeBought();

			if (parked > timebought)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

	string returnName()
	{
		return name;
	}

	string returnBadge()
	{
		return badge;
	}
	

private:
	
	string name;
	string badge;
	ParkedCar* obj1 = nullptr;
	ParkingMeter* obj2 = nullptr;
	
};
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

	

private:
	string badge;
};
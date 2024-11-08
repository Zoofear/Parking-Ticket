//

#pragma once
#include <iostream>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

class ParkingTicket
{
public:
	
	//Constructor

	ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o): car(c), meter(m), officer(o) {}

private:
	
};
//

#pragma once
#include <iostream>
#include <iomanip>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"

using namespace std;

class ParkingTicket
{
public:

	//Constructor

	ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o) : car(c), meter(m), officer(o) {}

	
	void calculateFeeDue()
	{

		int minsparked = car.returnMinsParked();

		int timebought = meter.returnTimeBought();

		int fee = meter.returnFee();

		int addfee = meter.returnAddFee();

		int feerate = meter.returnFeeRate();

			if (minsparked <= timebought)
			{
				exit(0);
			}
			else
			{
				int overtime = minsparked - timebought;

				double charges = ceil(overtime / feerate);

				feedue = fee + (charges * addfee);
			}
	}
	
	void printTicket()
	{
		
		calculateFeeDue();
		
		cout << setw(20) << "*** Parking Ticket ***" << endl;
		cout << "Officer " << officer.returnName() << " " << "Badge Number " << officer.returnBadge() << endl;
		cout << "Vehicle License Number: " << car.returnLicense() << endl;
		cout << "Make: " << car.returnMake() << " Model: " << car.returnModel() << " Color: " << car.returnColor() << endl;
		cout << "Meter Minutes: " << meter.returnTimeBought() << " Minutes Parked: " << car.returnMinsParked() << endl;
		cout << "Parking Fee: $" << feedue << endl;
	}
private:
	
	int feedue;
	PoliceOfficer officer;
	ParkedCar car;
	ParkingMeter meter;
};
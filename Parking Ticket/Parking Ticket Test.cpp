// Parking Ticket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

int main()
{
	ParkedCar vroom("Honda", "Civic", "Blue", "12abce", 30);

	ParkingMeter meter(20, 25, 10, 10);

	PoliceOfficer Officer("Noah Young", "badge");

	ParkingTicket ticket(vroom, meter, Officer);
	
	Officer.setParkedCarPointer(&vroom);

	Officer.setParkingMeterPointer(&meter);

	int tf = Officer.determinTicket();

	if (tf == 1)
	{
		ticket.printTicket();
	}
	else
	{
		cout << "no ticket wooo";
	}

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//This class takes the information of a car and stores it to be used

#pragma once
#include <iostream>
#include <string>
using namespace std;

class ParkedCar
{
public:

	
	//Constructor
	ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mp = 0) : make(mk), model(ml), color(co), license(ln), minsparked(mp) {}

	//Functions
	

	//This function takes inputted parameters or default parameters and assigns the variables the values
	void setInfo(string mk, string ml, string co, string ln, int mp)
	{
		make = mk;
		model = ml;
		color = co;
		license = ln;
		minsparked = mp;
	}

	//Takes the variable make and returns it
	string returnMake()
	{
		return make;
	}

	//Takes the variable model and returns it
	string returnModel()
	{
		return model;
	}

	//Takes the variable color and returns it
	string returnColor()
	{
		return color;
	}

	//Takes the variable license and returns it
	string returnLicense()
	{
		return license;
	}

	//Takes the variable minsparked and returns it
	int returnMinsParked()
	{
		return minsparked;
	}

	

	//Outputs all the variables
	void printInfo()
	{
		cout << "make:" << make << endl;
		cout << "model: " << model << endl;
		cout << "color: " << color << endl;
		cout << "license: " << license << endl;
		cout << "minutes parked: " << minsparked << endl;
	}
private:
	string make;
	string model;
	string color;
	string license;
	int minsparked;
};
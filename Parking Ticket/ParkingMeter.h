//

#pragma once
#include <iostream>
using namespace std;

class ParkingMeter 
{
public:

	//Initialization

	ParkingMeter(int tb = 0, int f = 0, int fr = 0, int af = 0) : timebought(tb), fee(f), feerate(fr), addfee(af) {}

	//Functions

	int returnTimeBought()
	{
		return timebought;
	}

	int returnFee()
	{
		return fee;
	}
	
	int returnFeeRate()
	{
		return feerate;
	}
	
	int returnAddFee()
	{
		return addfee;
	}
	
	void setTimeBought(int x)
	{
		timebought = x;
	}
	
	void setFee(int x)
	{
		fee = x;
	}
	
	void setFeeRate(int x)
	{
		feerate = x;
	}

	void setAddFee(int x)
	{
		addfee = x;
	}

private:
	int timebought;
	int fee;
	int feerate;
	int addfee;

};
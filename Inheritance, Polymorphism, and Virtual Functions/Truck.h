/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 TRUCK.H*/


/************************************************************************************
Creates the member variables and method prototypes for the Truck implementation file
*************************************************************************************/
#ifndef _TRUCK_H_
#define _TRUCK_H_
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int towCapacity;
public:
	Truck()
	{
		towCapacity = 0;
	}
	Truck(int towCap)
	{
		towCapacity = towCap;
	}
	void setTowCap(int);
	int getTowCap();
	void displayInfo();
};

#endif // !_TRUCK_H_


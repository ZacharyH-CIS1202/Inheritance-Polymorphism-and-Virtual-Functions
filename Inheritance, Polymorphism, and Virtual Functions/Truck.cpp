/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 TRUCK.CPP*/

#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************************
Implements the Towing Capacity getter and setter which is requested by the user in main.cpp.
Calls the base class method displayInfo() and then adds the final towing capacity function
*******************************************************************************************/
void Truck::setTowCap(int towCap)
{
	towCapacity = towCap;
}

int Truck::getTowCap()
{
	return towCapacity;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nTowing Capacity: " << getTowCap() << endl;
}
/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 VEHICLE.CPP*/

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

/***************************************************************************
Create the accessors and mutators for the Vehicle class. Include the base
method for displayInfo() which will be called by each child class.
***************************************************************************/
void Vehicle::setManufacturer(string mfg)
{
	manufacturer = mfg;
}

void Vehicle::setYear(int carYear) 
{ 
	year = carYear; 
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

double Vehicle::getYear()
{
	return year;
}

void Vehicle::displayInfo()
{
	cout << "\nVehicle Information" << endl;
	for (int i = 0; i < 35; i++)
	{
		cout << "-";
	}
	cout << "\nManufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year;
}
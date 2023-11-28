/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 CAR.CPP*/

#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

/*****************************************************************************
Creates the setter and getter for the Car class's doors functions, and calls
the base class method for the displayInfo() and then displays the total doors
*******************************************************************************/
void Car::setDoors(int doors)
{
	totalDoors = doors;
}

int Car::getDoors()
{
	return totalDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nTotal Doors: " << getDoors() << endl;
}
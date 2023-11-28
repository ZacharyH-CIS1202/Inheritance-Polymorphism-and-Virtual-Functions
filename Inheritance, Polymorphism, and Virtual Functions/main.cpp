/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 MAIN.CPP*/

#include <iostream>
#include <string>
#include <limits>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	/****************************************************************************************************************
	Created Variables for Vehicle class and the manufacturer and year built which is accessed by all three header
	files in displayInfo(). Use series of cout and cin to get the information and then call using the dot operator
	to set the manufacturer name, year of build, and then display that information
	****************************************************************************************************************/
	Vehicle vehicle;
    string vehicleMfg;
    int yearBuilt;

	cout << "Vehicle Program" << endl;

	/*Vehicle.h and Vehicle.cpp*/
	cout << "\nVehicle:" << endl;
	for (int i = 0; i < 35; i++) //Created bottom border to separate the displayed information for ALL types of vehicles.
	{
		cout << "-";
	}
    cout << "\nEnter the vehicle manufacturer: ";
	getline(cin, vehicleMfg);
	vehicle.setManufacturer(vehicleMfg);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	vehicle.setYear(yearBuilt);

	vehicle.displayInfo();

	/********************************************************************************************************************
	Car.h and Car.cpp: b.	Get input from the user for manufacturer, year built, and number of doors, then store this 
	information in a Car object.  Call the displayInfo method and display it on the output.
	********************************************************************************************************************/
	Car car;
	int doors;

	cout << "\n\nCar:" << endl;
	for (int i = 0; i < 35; i++)
	{
		cout << "-";
	}
	cout << "\nEnter the vehicle manufacturer: ";
	cin.ignore();
	getline(cin, vehicleMfg);
	car.setManufacturer(vehicleMfg);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	car.setYear(yearBuilt);

	cout << "Enter the number of doors: ";
	cin >> doors;
	car.setDoors(doors);

	car.displayInfo();

	/******************************************************************************************************************
	Truck.h and Truck.cpp: c.	Get input from the user for manufacturer, year built, and towing capacity, then store 
	this information in a Truck object.  Call the displayInfo method and display it on the output.
	******************************************************************************************************************/
	Truck truck;
	int towCap;

	cout << "\n\nTruck:" << endl;
	for (int i = 0; i < 35; i++)
	{
		cout << "-";
	}
	cout << "\nEnter the vehicle manufacturer: ";
	cin.ignore();
	getline(cin, vehicleMfg);
	truck.setManufacturer(vehicleMfg);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	truck.setYear(yearBuilt);

	cout << "Enter the towing capacity (in lbs.): ";
	cin >> towCap;
	truck.setTowCap(towCap);

	truck.displayInfo();

	system("pause");

	return 0;
}
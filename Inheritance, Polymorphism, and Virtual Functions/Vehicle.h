/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 VEHICLE.H*/

#ifndef _VEHICLE_H_
#define _VEHICLE_H_
#include <iostream>
#include <string>
using namespace std;

/***************************************************************************************
 This defines the member variables and method prototypes for the implementation file.
 Set a default constructor for manufacturer and year of build
*****************************************************************************************/
class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle()
	{
		manufacturer = "";
		year = 1900;
	};
	Vehicle(string mfg, int carYear)
	{
		manufacturer = mfg;
		year = carYear;

	}
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	double getYear();
	void displayInfo();
};
#endif // !_VEHICLE_H_
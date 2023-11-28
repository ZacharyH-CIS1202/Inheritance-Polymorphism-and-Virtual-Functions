/*Zachary Hartings
CIS 1202.201
11/26/2023
Chapter 15 CAR.H*/

#ifndef _CAR_H_
#define _CAR_H_
#include "Vehicle.h"

/********************************************************************************* 
Creates the member variables and method prototypes for the Car implementation
file. 
*********************************************************************************/
class Car : public Vehicle
{
private:
	int totalDoors;
public:
	Car()
	{
		totalDoors = 0;
	}
	Car(int doors)
	{
		totalDoors = doors;
	}
	void setDoors(int);
	int getDoors();
	void displayInfo();
};
#endif // !_CAR_H_


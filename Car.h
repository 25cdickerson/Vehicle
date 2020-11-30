// Christopher Dickerson
// 11/28/2020
// CIS 1202

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	// Variables
	int numDoors;

public:
	// Default Constructor
	Car() {
		numDoors = 0;
	}

	// Constructor
	Car(int n) {
		numDoors = n;
	}

	// Getters
	int getDoors();

	// Setters
	void setDoors(int n);

	// Function Displays Info
	void displayInfo();

};

#endif


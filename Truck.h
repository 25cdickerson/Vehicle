// Christopher Dickerson
// 11/28/2020
// CIS 1202

#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehicle.h"

class Truck: public Vehicle
{
private:
	// Variables
	int towCap;

public:
	// Default Constructor
	Truck() {
		towCap = 0;
	}

	// Constructor
	Truck(int t) {
		towCap = t;
	}

	// Getters
	int getTow();

	// Setters
	void setTow(int t);

	// Function Displays Info
	void displayInfo();

};

#endif
// Christopher Dickerson
// 11/28/2020
// CIS 1202

#include <iostream>
#include "Car.h"

int Car::getDoors() {
	return numDoors;
}

void Car::setDoors(int n) {
	numDoors = n;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numDoors << "\n";
}
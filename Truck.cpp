// Christopher Dickerson
// 11/28/2020
// CIS 1202

#include <iostream>
#include "Truck.h"

int Truck::getTow() {
	return towCap;
}

void Truck::setTow(int t) {
	towCap = t;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap << "\n";
}
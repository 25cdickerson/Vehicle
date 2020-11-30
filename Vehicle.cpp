// Christopher Dickerson
// 11/28/2020
// CIS 1202

#include <iostream>
using namespace std;

#include "Vehicle.h"

// Defining the functions

string Vehicle::getMan() {
	return manufacturer;
}

int Vehicle:: getYr() {
	return year;
}

void Vehicle:: setMan(string m) {
	manufacturer = m;
}

void Vehicle:: setYr(int y) {
	year = y;
}

void Vehicle:: displayInfo() {
	cout << "Manufacturer: " << manufacturer << "\n";
	cout << "Year: " << year << "\n";
}
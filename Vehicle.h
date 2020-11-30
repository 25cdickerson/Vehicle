// Christopher Dickerson
// 11/28/2020
// CIS 1202

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;


class Vehicle {
private:
	// Variables
	string manufacturer;
	int year;

public:
	// Default Constructor
	Vehicle() {
		manufacturer = "";
		year = 0;
	}

	// Constructor
	Vehicle(string m, int y) {
		manufacturer = m;
		year = y;
	}

	//Getters
	string getMan();
	int getYr();

	//Setters
	void setMan(string m);
	void setYr(int y);

	// Function that displays info
	void displayInfo();
};

#endif
// Christopher Dickerson
// 11/28/2020
// CIS1202

#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include"Truck.h"

using namespace std;

int main()
{
	string Manufacturer;
	string y;
	int year;

	cout << "Vehicle Program\n\n";
	cout << "Vehicle:\n";
	cout << "Enter Manufacturer: ";
	getline(cin, Manufacturer);
	cout << "\n";
	cout << "Enter Year Built: ";
	getline(cin, y);
	year = stoi(y);
	cout << "\nVehicle Info\n";

	Vehicle v(Manufacturer, year);
	v.displayInfo();
	cout << "\n\n";

	int numDoor;
	cout << "Car:\n";
	cout << "Enter Manufacturer: ";
	getline(cin, Manufacturer);
	cout << "\n";
	cout << "Enter Year Built: ";
	getline(cin, y);
	year = stoi(y);
	cout << "Enter Number of Doors: ";
	getline(cin, y);
	numDoor = stoi(y);

	cout << "\nCar Info\n";
	Car c(numDoor);
	c.setMan(Manufacturer);
	c.setYr(year);
	c.displayInfo();
	cout << "\n\n";

	int tow;
	cout << "Truck:\n";
	cout << "Enter Manufacturer: ";
	getline(cin, Manufacturer);
	cout << "\n";
	cout << "Enter Year Built: ";
	getline(cin, y);
	year = stoi(y);
	cout << "Tow Capacity: ";
	getline(cin, y);
	tow = stoi(y);
	
	cout << "\nTruck Info\n";
	Truck t(tow);
	t.setMan(Manufacturer);
	t.setYr(year);
	t.displayInfo();
	cout << "\n\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

//Vehicle Class
class Vehicle {
protected:
	Vehicle myVehicle[9];
	string make;  //make
    string model; // model
    string color;  // color
    int	year;  // year
    int mileage;  // miles on car
	string type;  //Type of vehicle

public:
	//Constructor that will set information for a new car
	void New_vehicle (string a, string b, string c, int d, int e) 
	{make = a; model = b; color = c; year = d; mileage = e;}
	
	Vehicle(); //Default constructor
	Vehicle(string, string, string, int, int, string);
	//mutator and accessor functions
	void setMake(string);
    void setModel(string);
    void setColor(string);
    void setYear(int);
    void setMileage(int);
	void setType(string);

    string getMake();
    string getModel();
    string getColor();
    int getYear();
    int getMileage();
	string getType();

	//Check mileage to see if valid
	void valid_mileage(int);

	//virtual function
	virtual void details() {
	}

};
//Sets to default values
Vehicle::Vehicle() {
	make = " ";
    model = " ";
    color = " ";
    year = 0;
    mileage = 0;
	type = " ";
}

Vehicle::Vehicle(string make, string model, string color, int year, int mileage, string type) {
    Vehicle::make =  make;
    Vehicle::model = model;
    Vehicle::color = color;
    Vehicle::year = year;
    valid_mileage(mileage);
	Vehicle::type = type;
}

void Vehicle::setMake(string make) {
    Vehicle::make = make;
}

void Vehicle::setModel(string model) {
    Vehicle::model = model;
}

void Vehicle::setColor(string color) {
    Vehicle::color = color;
}

void Vehicle::setYear(int year) {
    Vehicle::year = year;
}

void Vehicle::setMileage(int mileage) {
    valid_mileage(mileage);
}

void Vehicle::setType(string type) {
	Vehicle::type = type;
}


string Vehicle::getMake() {
    return make;
}
string Vehicle::getModel() {
    return model;
}
string Vehicle::getColor() {
    return color;
}
int Vehicle::getYear() {
    return year;
}
int Vehicle::getMileage() {
    return mileage;
}

string Vehicle::getType() {
	return type;
}


void Vehicle::valid_mileage(int mileage) {
    if (mileage>=0)
        Vehicle::mileage=mileage;
    else {
        Vehicle::mileage=0;
        cout << "WARNING! You have entered invalid mileage!\n";
    }

	    Vehicle& getVehicle(int n) {
        return myVehicle[n];
    }
};

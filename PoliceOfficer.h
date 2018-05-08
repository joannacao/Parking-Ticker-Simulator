#pragma once
#include "stdafx.h"
#include "ParkingMeter.h"
#include "ParkedCar.h"
#include "ParkingTicket.h"
#include <string>

class ParkingTicket; 

using namespace std; 

class PoliceOfficer {
private:
	string name; 
	int badge; 

public:
	PoliceOfficer(string, int); 
	int calcFine(int, int); //method for calculating the fine 
	ParkingTicket issueTicket(ParkingMeter, ParkedCar); //creates the ticket for that parking meter and car
	bool checkExpire(ParkingMeter, ParkedCar); //returns true if the time is expired 
	//accessors
	string getName(); 
	int getBadge();
};

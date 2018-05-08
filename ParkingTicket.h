#pragma once
#include "stdafx.h"
#include "ParkedCar.h"
#include "PoliceOfficer.h"
#include "ParkingMeter.h"
#include <string> 

using namespace std; 

class PoliceOfficer; 

class ParkingTicket {
private:
	int fine; //how much the fine is for the ticket
	string illegalLicense; 
	string illegalColor; 
	string illegalMake; 
	string illegalModel; 
	string policeName; //police info for the police who filled out the ticket
	int policeBadge; 

public: 
	ParkingTicket(int, ParkedCar, PoliceOfficer); //police officer is included as the information on the ticket, along with the indicated fine and parked car
	
	//accessors
	string getIllegalLicense(); 
	string getIllegalColor();
	string getIllegalMake(); 
	string getIllegalModel(); 
	int getFine(); 
	string getPoliceName(); 
	int getPoliceBadge(); 
};

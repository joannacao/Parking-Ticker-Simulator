#include "stdafx.h"
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>
#include <iostream>

using namespace std; 

PoliceOfficer::PoliceOfficer(string n, int b)
{
	name = n;
	badge = b; 
}

int PoliceOfficer::calcFine(int purchase, int actualMin)
{
	int fine = 0; 
	int illegalHours = actualMin - purchase; 
	if (illegalHours > 1) {
		fine += 25;
		illegalHours -= 1; 
		while (illegalHours > 0) {
			fine += 10; 
			illegalHours -= 1; 
		}
	}
	else {
		fine += 25; 
	}

	return fine;
}

ParkingTicket PoliceOfficer::issueTicket(ParkingMeter m, ParkedCar p)
{
	int fine = calcFine(m.getMinutes(), p.getMinutes()); //fine is calculated in the method, then the ticket is created using it as an arg
	ParkingTicket ticket(fine, p, *this); 
	return ticket; 
}

bool PoliceOfficer::checkExpire(ParkingMeter m, ParkedCar c)
{
	if (m.getMinutes() < c.getMinutes()) {
		cout << "The car's time has expired." << endl; //checks to see which num of minutes is larger
		return true; 
	}
	else {
		cout << "This car is fine!" << endl << endl;
		return false; 
	}
}

string PoliceOfficer::getName()
{
	return name;
}

int PoliceOfficer::getBadge()
{
	return badge;
}

// ParkingTicketSimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>

using namespace std; 


int main()
{
	ParkedCar car1(30, "000000", "Black", "?", "2010"); //created first car, it's been parked for 30 minutes
	ParkingMeter meter1(20); //meter has purchased time set for 20 minutes
	PoliceOfficer officer1("Henry", 491023); //police officer

	ParkedCar car2(10, "2130471", "White", "?", "2305"); //second car, been parked for 10 minutes
	ParkingMeter meter2(40); //meter has purchased time set for 40 minutes
	PoliceOfficer officer2("Jane", 397500); //second police officer

	if (officer1.checkExpire(meter1, car1)) { //makes police officer check if the time is expired
		ParkingTicket ticket1 = officer1.issueTicket(meter1, car1); //issues ticket if it is
		cout << "Fine: " << ticket1.getFine() << endl; //prints out the fine to show the calculation occurred
		cout << "Illegal License: " << ticket1.getIllegalLicense() << endl; //prints out other details 
		cout << "Color of car: " << ticket1.getIllegalColor() << endl; 
		cout << "Written by officer: " << ticket1.getPoliceName() << endl; 
		cout << "Badge #: " << ticket1.getPoliceBadge() << endl << endl;
	}
	if (officer2.checkExpire(meter2, car2)) { //second police officer checks if time is expired
		ParkingTicket ticket2 = officer2.issueTicket(meter2, car2); //will do the following if it is, but it isn't so the checkExpire method prints that it's fine 
		cout << "Fine: " << ticket2.getFine() << endl;
		cout << "Illegal License: " << ticket2.getIllegalLicense() << endl;
		cout << "Color of car: " << ticket2.getIllegalColor() << endl;
		cout << "Written by officer: " << ticket2.getPoliceName() << endl;
		cout << "Badge #: " << ticket2.getPoliceBadge() << endl << endl;
	}
    return 0;
}


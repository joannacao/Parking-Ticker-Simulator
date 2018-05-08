#include "stdafx.h"
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "PoliceOfficer.h"
#include <string>

using namespace std; 


ParkingTicket::ParkingTicket(int f, ParkedCar illegal, PoliceOfficer police)
{
	fine = f;
	illegalLicense = illegal.getLicense(); 
	illegalColor = illegal.getColor(); 
	illegalMake = illegal.getMake(); 
	illegalModel = illegal.getModel(); 
	policeName = police.getName(); 
	policeBadge = police.getBadge(); 
}

string ParkingTicket::getIllegalLicense()
{
	return illegalLicense; 
}

string ParkingTicket::getIllegalColor()
{
	return illegalColor;
}

string ParkingTicket::getIllegalMake()
{
	return illegalMake;
}

string ParkingTicket::getIllegalModel()
{
	return illegalModel;
}

int ParkingTicket::getFine()
{
	return fine;
}

string ParkingTicket::getPoliceName()
{
	return policeName;
}

int ParkingTicket::getPoliceBadge()
{
	return policeBadge;
}

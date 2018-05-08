#include "stdafx.h"
#include "ParkingMeter.h"

ParkingMeter::ParkingMeter(int min)
{
	purchasedMinutes = min; 
}

int ParkingMeter::getMinutes()
{
	return purchasedMinutes;
}

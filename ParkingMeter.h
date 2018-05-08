#pragma once
#include "stdafx.h"

class ParkingMeter {
private:
	int purchasedMinutes; //has one member variable: the number of minutes the car purchased to park

public:
	ParkingMeter(int); //creates the parking meter with the indicated minutes
	int getMinutes(); //accessor
};

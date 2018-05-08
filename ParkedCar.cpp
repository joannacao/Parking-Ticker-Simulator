#include "stdafx.h"
#include "ParkedCar.h"
#include "ParkingTicket.h"
#include <string>

using namespace std; 

ParkedCar::ParkedCar()
{
	numMinutes = 10; //if default constructor, numMinutes defaults to 10 (i chose a random number)
	license = ""; 
	color = ""; 
	make = "";
	model = ""; 
}

ParkedCar::ParkedCar(int min, string l, string c, string Make, string Model)
{
	numMinutes = min;
	license = l; 
	color = c; 
	make = Make; 
	model = Model; 
}

int ParkedCar::getMinutes()
{
	return numMinutes;
}

string ParkedCar::getLicense()
{
	return license;
}

string ParkedCar::getColor()
{
	return color;
}

string ParkedCar::getMake()
{
	return make;
}

string ParkedCar::getModel()
{
	return model;
}

void ParkedCar::setMinutes(int min)
{
	numMinutes = min;
}

void ParkedCar::setLicense(string l)
{
	license = l;
}

void ParkedCar::setColor(string c)
{
	color = c; 
}

void ParkedCar::setMake(string Make)
{
	make = Make; 
}

void ParkedCar::setModel(string Model)
{
	model = Model; 
}

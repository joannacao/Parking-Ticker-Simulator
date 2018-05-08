#pragma once
#include "stdafx.h"
#include <string>

using namespace std; 

class ParkedCar {
private: 
	int numMinutes; 
	string license; 
	string color; 
	string make; 
	string model; 

public: 
	ParkedCar(); //default construction, but in our case is not used
	ParkedCar(int, string, string, string, string); //constructor for initializing everything
	//~ParkedCar(); 
	
	//accessors
	int getMinutes(); 
	string getLicense();
	string getColor(); 
	string getMake(); 
	string getModel(); 

	//mutators
	void setMinutes(int);
	void setLicense(string); 
	void setColor(string); 
	void setMake(string); 
	void setModel(string); 
};

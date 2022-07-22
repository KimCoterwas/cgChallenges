#include "Vehicle.h"

Vehicle::Vehicle()
{
	m_year = 0;
	m_miles = 0;
	m_brand = "";
}

// destructor
Vehicle::~Vehicle() {}

// get methods
int Vehicle::getYear() { return m_year; }
int Vehicle::getMiles() { return m_miles; }
string Vehicle::getBrand() { return m_brand; }

void Vehicle::setYear(int year)
{
	m_year = year;
}

void Vehicle::setMiles(int miles)
{
	m_miles = miles;
}

void Vehicle::setBrand(string brand)
{
	m_brand = brand;
}

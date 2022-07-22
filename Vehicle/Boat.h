#pragma once
#include "Vehicle.h"

using namespace std;

class Boat :
    public Vehicle
{
public:
    Boat();
    Boat(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

    // destructor
    virtual ~Boat();

};


#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
public:
    Car();
    Car(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

    // destructor
    virtual ~Car();
};


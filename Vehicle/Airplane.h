#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Airplane :
    public Vehicle
{
public:
    Airplane();
    Airplane(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

     // destructor
     virtual ~Airplane();
};


#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    // member variables
    int m_year;
    int m_miles;
    string m_brand;
public:
    // construtors
    Vehicle();

    Vehicle(int year, int miles, string brand) :
        m_year(year),
        m_miles(miles),
        m_brand(brand) {}

    // destructor
    virtual ~Vehicle();

    // accessors
    int getYear();
    int getMiles();
    string getBrand();
    void setYear(int year);
    void setMiles(int miles);
    void setBrand(string brand);

    // functions
    void Drive(int miles)
    {
        m_miles += miles;
    }

    void Display()
    {
        cout << "Brand: " << m_brand << endl;
        cout << "Year: " << m_year << endl;
        cout << "Miles: " << m_miles << endl;
        cout << "\n" << endl;
    }
};


#include <iostream>
#include "Car.h"
#include "Boat.h"
#include "Airplane.h"

int main()
{
	Car* myCar = new Car(2012, 3000, "Kia");
	myCar->Drive(200);
	cout << "Car:" << endl;
	myCar->Display();
	delete myCar;

	Boat* myBoat = new Boat(2012, 500, "Tracker");
	myBoat->Drive(145);
	cout << "Boat:" << endl;
	myBoat->Display();
	delete myBoat;

	Airplane* myAirplane = new Airplane(2015, 4000, "AirBus");
	myAirplane->Drive(456);
	cout << "Airplane:" << endl;
	myAirplane->Display();
	delete myAirplane;
}
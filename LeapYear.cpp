#include <iostream>
using namespace std;

int main()
{
	int year;

	cout << "Enter a year: ";
	cin >> year;

	// Check if year is divisible by 4 and not 100
	// or if it is divisible by 400
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << year << " is a leap year.";
	}
	else {
		cout << year << " is not a leap year.";
	}
}
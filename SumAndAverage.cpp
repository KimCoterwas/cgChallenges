#include <iostream>

using namespace std;

int main()
{
	// Chapter 2 
	// Challenge to interpret user input
	// to calculate a sum and average
	int num1;
	cout << "Please enter the first number: ";
	cin >> num1;

	int num2;
	cout << "Please enter the second number: ";
	cin >> num2;

	int num3;
	cout << "Please enter the third number: ";
	cin >> num3;

	int sum = num1 + num2 + num3;
	float avg = (float)sum / 3;

	cout << "The sum is " << sum << ". The average is " << avg << "." << endl;
}
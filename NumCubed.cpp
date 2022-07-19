#include <iostream>
using namespace std;

// Challenge to return user's inputted number cubed
int cubeNum(int num)
{
	return num * num * num;
}

int main()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	cout << "Cube of " << num << " is " << cubeNum(num) << "." << endl;
}
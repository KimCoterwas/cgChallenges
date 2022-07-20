#include <iostream>
using namespace std;

int main()
{
	int num;
	float arr[10];

	cout << "Enter number of elements you want in the array (from 1 to 10): ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		cout << "Enter element " << (i + 1) << ": ";
		cin >> arr[i];
	}

	int largestNum = arr[0];
	for (int i = 0; i < num; i++) {
		if (largestNum < arr[i])
			largestNum = arr[i];
	}

	cout << "The largest element in the array is: " << largestNum;
}
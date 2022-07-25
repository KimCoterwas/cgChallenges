#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Please enter integer 1: " << endl;
	cin >> a;
	cout << "Please enter integer 2: " << endl;
	cin >> b;

	int* ptrA, * ptrB;
	ptrA = &a;
	ptrB = &b;

	cout << "Pointer A: " << ptrA << endl << "Pointer A value: " << *ptrA << endl << "Pointer B: " << ptrB << endl << "Pointer B value: " << *ptrB << endl;

}
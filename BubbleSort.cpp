#include <iostream>
#include <stdlib.h>
#include <chrono>

using namespace std;

uint32_t GetNanos();

void BubbleSort(int arr[], int n);

void PrintArray(int arr[], int n);


int main()
{
	int arr[] = { 4, 6, 2, 8, 9, 0 };

	int n = sizeof(arr) / sizeof(arr[0]);
	uint32_t StartNanos = GetNanos();
	BubbleSort(arr, n);
	uint32_t EndNanos = GetNanos();
	cout << "Bubble Sort took: " << (EndNanos - StartNanos) << " nanoseconds." << endl;
	cout << "Sorted array: \n";
	PrintArray(arr, n);
}

uint32_t GetNanos()
{
	using namespace std::chrono;
	return static_cast<uint32_t>(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count());
}

void BubbleSort(int arr[], int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - pass - 1; i++)
		{
			if (arr[pass] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
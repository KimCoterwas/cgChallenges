#include <iostream>
#include <thread>

using namespace std;

bool DidQuit = false;

int ThreadVar = 0;

void HelloWorldThread()
{
	while (!DidQuit)
	{
		ThreadVar++;
		if (ThreadVar > 1000)
		{
			ThreadVar = 0;
		}
	}
}

int main()
{
	cout << "Hello World" << endl;
	char UserInput;
	std::thread Hello(HelloWorldThread);

	

	while (!DidQuit)
	{
		cout << "Enter any key to display counter" << endl;
		cout << "q to quit" << endl;
		cin >> UserInput;
		DidQuit = (UserInput == 'q');
		cout << "ThreadVar: " << ThreadVar << endl;
	}

	Hello.join();

		return 0;
}
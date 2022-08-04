// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

bool DidQuit = false;
bool ShouldDecrementLife = false;

struct Character
{
    float Position = 0.0f;
    int Score = 0;
    int Lives = 1;

    void DisplayStats()
    {
        cout << "Lives: " << Lives << endl;
    }
};

Character Player;

void UpdateCharacter1()
{
    while (!DidQuit)
    {
        if (ShouldDecrementLife)
        {
            if (Player.Lives > 0)
            {
                //the two lines below essentially do the same thing
                //this_thread::sleep_for(chrono::milliseconds(500));
                //this_thread::yield();
                --Player.Lives;
            }
        }
    }
}

void UpdateCharacter2()
{
    while (!DidQuit)
    {
        if (ShouldDecrementLife)
        {
            if (Player.Lives > 0)
            {
                //the two lines below essentially do the same thing
                //this_thread::sleep_for(chrono::milliseconds(500));
                //this_thread::yield();
                --Player.Lives;
            }
        }
    }
}

void ProcessInput()
{
    while (!DidQuit)
    {
        cout << "'a' to decrement player life" << endl;
        cout << "'d' to display player stats" << endl;
        cout << "'q' to quit" << endl;

        char UserInput;
        cin >> UserInput;

        switch (UserInput)
        {
        case 'a':
            ShouldDecrementLife = true;
            break;
        case 'd':
            Player.DisplayStats();
            break;
        case 'q':
            DidQuit = true;
            break;
        default:
            break;
        }

        DidQuit = (UserInput == 'q');
    }
}


int main()
{
    thread InputHandler(ProcessInput);
    thread CharacterUpdate1(UpdateCharacter1);
    thread CharacterUpdate2(UpdateCharacter2);

    InputHandler.join();
    CharacterUpdate1.join();
    CharacterUpdate2.join();

    return 0;
}

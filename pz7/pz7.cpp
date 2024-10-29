﻿// pz7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    queue<char> charQueue;
    string input;

    // Введення речення з клавіатури
    cout << "Введіть речення: ";
    getline(cin, input);

    for (char c : input)
    {
        charQueue.push(c);
    }

    string input2 = "студент";
    string current;
    bool found = false;

    while (!charQueue.empty())
    {
        current += charQueue.front();
        charQueue.pop();

        if (current.size() > input2.size())
        {
            current.erase(0, 1);
        }

        if (current == input2)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Слово 'студент' є у черзі";
    else
        cout << "Слова 'студент' немає у черзі";

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

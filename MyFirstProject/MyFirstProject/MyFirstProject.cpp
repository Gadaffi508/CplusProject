// MyFirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string isim;

    cout << "Hello World!\n";
    cout << "Yusuf!\n";

    cout << "enter your name \n";
    cin >> isim;

    cout << sqrt(64);
    cout << "\n";

    int x = 5;
    int y = 10;

    if (x > y)
    {
        cout << "x > y";
    }
    else if (x < y)
    {
        cout << "x < y";
    }
    else
    {
        cout << "x = y";
    }

    //MyFunction(3, 5);
}

void MyFunction(int a, int b)
{
    int toplam = a + b;
    cout << "toplam : " << toplam;
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

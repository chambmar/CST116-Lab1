// Rememb-o-matic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <new>

using std::cout;
using std::cin;
using std::nothrow;

void number_loop()
{
    int i, n;
    int* p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory could not be allocated";
    else
    {
        for (n = 0; n < i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }
}

int main()
{
    number_loop();
    return 0;
}

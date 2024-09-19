/*
Author: Eli Keli
Date: September 12
Description: Basics of C++.
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

// Program to compare ages
int main()
{
    int age1, age2, age3;

    // Prompt users to imput age
    cout << "Enter first age" << endl;
    cin >> age1;

    cout << "Enter Second age" << endl;
    cin >> age1;

    cout << "Enter Third age" << endl;
    cin >> age1;

    // compare ages
    if (age2 > age1 && age2 > age3)
    {
        cout << "Student 1 is the eldest" << endl;
    }
    else if (age1 > age2 && age1 > age3)
    {
        cout << "Student 1 is the eldest" << endl;
    }

    return 0;
}
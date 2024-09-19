/*
Author: Eli Keli
Date: September 12
Description: Basics of C++.
Registration Number: BSE-05-0238/2023
*/


// Write a C++ program to print the largest of three numbers. Prompt the user to enter the 3 numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Prompt users to input the 3 numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Compare the numbers and find the largest
    if (num1 > num2 && num1 > num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}
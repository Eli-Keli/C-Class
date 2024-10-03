/*
Author: Eli Keli
Date: September 26
Description: Functions in C++
Registration Number: BSE-05-0238/2023
*/

/*
Write a C++ program to calculate simple interest by accepting the principal amount, time and the rate values. The simple interest is given by (principal amount * time * rate)/100
*/

#include <iostream>
using namespace std;

int main() {
    float principal, time, rate, simpleInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time in years: ";
    cin >> time;

    cout << "Enter rate of interest per annum: ";
    cin >> rate;

    simpleInterest = (principal * time * rate) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
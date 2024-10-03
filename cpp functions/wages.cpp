/*
Author: Eli Keli
Date: September 26
Description: Functions in C++
Registration Number: BSE-05-0238/2023
*/

/*
write a program that requests the user to enter hours worked in a week and the hourly wage. The program should then print the gross pay, the taxes, and the net pay. Assume the following:
    - Overtime (in excess of 40 hours for weekly) = time and a half.
    - Tax rate: 15% of the first $600, 20% of the rest.
*/

#include <iostream>
using namespace std;

// Function to calculate gross pay
double calculateGrossPay(double hoursWorked, double hourlyWage) {
    double grossPay;

    if (hoursWorked > 40) {
        grossPay = 40 * hourlyWage + (hoursWorked - 40) * (hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    return grossPay;
}

// Function to calculate taxes
double calculateTaxes(double grossPay) {
    double taxes;

    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = 0.15 * 600 + 0.20 * (grossPay - 600);
    }

    return taxes;
}

// Function to calculate net pay
double calculateNetPay(double grossPay, double taxes) {
    double netPay = grossPay - taxes;
    return netPay;
}

int main() {
    double hoursWorked, hourlyWage, grossPay, taxes, netPay;
    
    cout << "Enter the number of hours worked in a week: ";
    cin >> hoursWorked;
    
    cout << "Enter the hourly wage: $";
    cin >> hourlyWage;
    
    grossPay = calculateGrossPay(hoursWorked, hourlyWage);
    taxes = calculateTaxes(grossPay);
    netPay = calculateNetPay(grossPay, taxes);
    
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;
    
    return 0;
}
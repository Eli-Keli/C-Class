/*
Author: Eli Keli
Date: September 12
Description: Basics of C++.
Registration Number: BSE-05-0238/2023
*/


// A company decided to give bonus to employee according to the following criteria:
/* 
    Time Period of Service       Bonus
    More than 10 years          10%
    >=6 and <= 10               8%
    Less than 6 years           5%
*/
// Ask the user for their salary and years of service and print the net bonus amount. (C++)

#include <iostream>
using namespace std;

int main() {
    float salary, bonusPercentage;
    int yearsOfService;
    string bonusCriteria;

    // Ask the user for their salary and years of service
    cout << "Enter your salary: $";
    cin >> salary;
    cout << "Enter your years of service: ";
    cin >> yearsOfService;

    if (yearsOfService > 10) {
        bonusCriteria = "More than 10 years";
        bonusPercentage = 0.10;
    } else if (yearsOfService >= 6 && yearsOfService <= 10) {
        bonusCriteria = "Between 6 and 10 years";
        bonusPercentage = 0.08;
    } else {
        bonusCriteria = "Less than 6 years";
        bonusPercentage = 0.05;
    }

    float totalBonus = salary * bonusPercentage;

    cout << "Total bonus amount: $" << totalBonus << endl;
    cout << "Bonus criteria: " << bonusCriteria << endl;
    return 0;
}
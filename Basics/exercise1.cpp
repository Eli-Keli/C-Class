/*
Author: Eli Keli
Date: September 12
Description: Basics of C++
Registration Number: BSE-05-0238/2023
*/

// EXCERCISE 1
// C++ program to check whether a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}

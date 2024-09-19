/*
Author: Eli Keli
Date: September 12
Description: Basics of C++
Registration Number: BSE-05-0238/2023
*/

// EXCERCISE 2
// C++ program to check whether a character is a vowel or consonant

#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
    character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}
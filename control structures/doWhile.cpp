/*
Author: Eli Keli
Date: September 19
Description: Control structures in C++ (do while loop)
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

int main() {
    int i=0, sum=0;

    do
    {
        cout << i << endl;
        sum += i;
        i++;
    } while (i <= 100);

    cout << "Sum of numbers from 0 to 100: " << sum << endl;
    
}
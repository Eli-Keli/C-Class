/*
Author: Eli Keli
Date: September 19
Description: Control structures in C++ (while loop)
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

int main() {
    int i=0, sum=0;

    while (i <= 100)
    {
        cout << i << endl;
        sum += i;
        i++;	
    }

    cout << "Sum of first 100 numbers: " << sum << endl;

    return 0; 
}
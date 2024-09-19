/*
Author: Eli Keli
Date: September 19
Description: Control structures in C++ (for loop)
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

int main() {
    int i, sum=0;
    for ( i = 0; i <= 100; i++)
    {
        cout << i << endl;
        i++;
        sum += i;
    }
    cout << "The sum is " << sum << endl;
    
}
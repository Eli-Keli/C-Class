/*
Author: Eli Keli
Date: September 26
Description: Functions in C++
Registration Number: BSE-05-0238/2023
*/

/*
Volume of a sphere is given by the formula 4/3*pi*radius^3. Write a C++ function to find the volume of the sphere. Prompt the user to enter radius.
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double radius;
    
    // Prompt the user to enter the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
    // Calculate and print the volume of the sphere
    cout << "The volume of the sphere is: " << (4.0 / 3.0) * M_PI * pow(radius, 3) << endl;

    return 0;
}
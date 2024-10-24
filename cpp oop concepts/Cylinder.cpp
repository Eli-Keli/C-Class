/*
Author: Eli Keli
Date: October 17
Description: C++ Classes and Objects (Excercice 1)
Registration Number: BSE-05-0238/2023
*/

/*
write a C++ Program that will implement a class named Cylinder with three data members: radius, height and two member functions to determine the output of the surface area and volume of the cylinder.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Cylinder {
    public:
        // Data members
        double radius;
        double height;

        // Member functions
        double surfaceArea() {
            return 2 * M_PI * radius * (radius + height);
        }

        double volume() {
            return M_PI * pow(radius, 2) * height;
        }
};

int main() {
    Cylinder c1;

    c1.radius = 5;
    c1.height = 10;
    
    cout << "Surface Area: " << c1.surfaceArea() << endl;
    cout << "Volume: " << c1.volume() << endl;
    
    return 0;
}
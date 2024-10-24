/*
Author: Eli Keli
Date: October 17
Description: C++ Classes and Objects
Registration Number: BSE-05-0238/2023
*/
#include <iostream>
using namespace std;

class Rectangle {
    public: //(Access Specifier) - Members are accessible outside the class
        // Data members
        int length, width;
        
        // Member functions
        int area() {
            return length * width;
        }

        int perimeter() {
            return 2 * (length + width);
        }
};

int main() {
    // Creating an object of Rectangle class
    Rectangle r1, r2; 

    // Assigning values to data members
    r1.length = 5;
    r1.width = 10;

    r2.length = 10;
    r2.width = 20;
    
    // Accessing member functions
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;
    
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Perimeter of r2: " << r2.perimeter() << endl;
    
    return 0;
}
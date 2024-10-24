/*
Author: Eli Keli
Date: October 17
Description: C++ Classes and Objects (Excercice 2)
Registration Number: BSE-05-0238/2023
*/

/*
write a C++ program that will implement a class named addition with three integers initialized to 22, 30, and 50 respectively and a member function to determine and output the product of the three integers.
*/

#include <iostream>
using namespace std;

class Addition {
    public:
        // Data members
        int num1 = 22;
        int num2 = 30;
        int num3 = 50;

        // Member function
        int product() {
            return num1 * num2 * num3;
        }
};

int main() {
    Addition add;

    cout << "Product: " << add.product() << endl;

    return 0;
}
/*
Author: Eli Keli
Date: October 24
Description: Inheritance Excercise
Registration Number: BSE-05-0238/2023
*/


#include <iostream>
using namespace std;

class Shape {
    protected:
        string color;

    public:

        void setColor(string c) {
            color = c;
        }

        string getColor() {
            return color;
        }
};

class Rectangle: public Shape {
    private:
        float length, width;

    public:

        Rectangle(float l, float w, string c) {
            length = l;
            width = w;
            color = c;
        }

        float area() {
            return length * width;
        }
};

class Circle: public Shape {
    private:
        float radius;

    public:

        Circle(float r, string c) {
            radius = r;
            color = c;
        }

        float area() {
            return 3.14 * radius * radius;
        }
};

int main() {
    Rectangle rect(15, 10, "blue");
    Circle circ(2, "pink");

    cout << "Rectangle color: " << rect.getColor() << endl;
    cout << "Rectangle area: " << rect.area() << endl;

    cout << "Circle color: " << circ.getColor() << endl;
    cout << "Circle area: " << circ.area() << endl;

    return 0;
}   
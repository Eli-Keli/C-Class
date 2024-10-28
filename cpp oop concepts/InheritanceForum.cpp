/*
Author: Eli Keli
Date: October 24
Description: Inheritance Forum Question
Registration Number: BSE-05-0238/2023
*/

/*
1. What is the benefit of inheritance as applied in OOP.
    - Inheritance allows for code reusability, where a new class can inherit properties and methods from an existing class. This helps in reducing redundancy and improving maintainability.
    - It also supports the concept of hierarchical classification, which can make the code more organized and easier to understand.
    - Inheritance facilitates polymorphism, allowing objects to be treated as instances of their parent class, which can simplify code and improve flexibility.

2. Create a class called Animal with two public methods sleep() and eat()
3. Create a derived class Dog that inherits from parent class Animal with one method bark()
4. Create an object of Dog class and access the three methods bark(), sleep(), and eat()
*/

#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "Animal is eating" << endl;
        }
        void sleep() {
            cout << "Animal is sleeping" << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "Dog is barking" << endl;
        }
};

int main() {
    Dog dog;

    dog.bark();
    dog.sleep();
    dog.eat();
    
    return 0;
}
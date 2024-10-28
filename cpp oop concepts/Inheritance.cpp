/*
Author: Eli Keli
Date: October 24
Description: Inheritance
Registration Number: BSE-05-0238/2023
*/

// Encapsulation
/*
The meaning of Encapsulation is to make sure that "sensitive" data is hidden from users. To achieve this you must declare class variables/attributes as private (cannot be accessed from outside the class)
*/

// Polymorphism
/*
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
*/

#include <iostream>
using namespace std;

// Single Inheritance
class Animal {
    public:
        void eat() {};
        void sleep() {};
};

class Dog : public Animal {
    public:
        void bark() {};
};


// Multiple Inheritance
class Father {
    public:
        void height() {};
        
};

class Mother {
    public:
        void skinColor() {};

};

class Child : public Father, public Mother {
    public:
        void genes() {};
};


// Hierarchical Inheritance
class Bird {
    public:
        void layEggs() {};
};

class FlyingBird : public Bird {
    public:
        void fly() {};
};

class NonFlyingBird : public Bird {
    public:
        void swim() {};
};

class Eagle : public FlyingBird {
    public:
        void hunt() {};
};

class Penguin : public NonFlyingBird {
    public:
        void slide() {};
};



int main() {
    Dog robin;

    robin.eat();
    robin.sleep();
    robin.bark();

    Child son;

    son.height();
    son.skinColor();
    son.genes();

    Eagle eagle;

    eagle.layEggs();
    eagle.fly();
    eagle.hunt();

    Penguin penguin;

    penguin.layEggs();
    penguin.swim();
    penguin.slide();

    return 0;
};

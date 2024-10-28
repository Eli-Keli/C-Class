/*
Author: Eli Keli
Date: October 24
Description: Inheritance Excercise
Registration Number: BSE-05-0238/2023
*/

#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        float price;
        int mileage;
        
    public:
        Car(string brand, string model, float price, int mileage) {
            this->brand = brand;
            this->model = model;
            this->price = price;
            this->mileage = mileage;
        }

        void display() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Price: " << price << endl;
            cout << "Mileage: " << mileage << endl;
        }

        void drive(int distance) {
            mileage += distance;
            cout << "Driving...New Mileage: " << mileage << endl;
        }
};

int main() {
    Car car("Toyota", "Corolla", 20000, 5000);

    car.display();
    car.drive(150);
    car.drive(300);

    return 0;
}
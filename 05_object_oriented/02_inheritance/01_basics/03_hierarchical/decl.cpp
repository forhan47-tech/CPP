#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving car..." << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Riding bike..." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.start();
    c.drive();

    b.start();
    b.ride();
    return 0;
}

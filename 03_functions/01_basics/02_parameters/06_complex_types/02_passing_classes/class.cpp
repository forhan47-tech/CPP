#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) {}
    void display() { 
        cout << "Car: " << model << endl; 
    }
};

void showCar(Car c) { 
    c.display(); 
}               // pass by value

void renameCar(Car &c, string newModel) { 
    c.model = newModel; 
}               // pass by reference

int main() {
    Car myCar("Toyota");
    showCar(myCar);
    renameCar(myCar, "Honda");
    showCar(myCar);
}

#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) {}
};

void showCar(const Car &c) { // safe, efficient
    cout << "Car model: " << c.model << endl;
}

int main() {
    Car myCar("Mercedes");
    showCar(myCar); // cannot modify inside function
}

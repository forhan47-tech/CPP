#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) {}
};

void showCar(Car c) { // copy
    cout << "Car model: " << c.model << endl;
    c.model = "Changed"; // modifies only the copy
}

int main() {
    Car myCar("Toyota");
    showCar(myCar);
    cout << "Outside: " << myCar.model << endl;
}

#include <iostream>
using namespace std;

class Car {
public:
    void drive() {
        cout << "Driving the car..." << endl;
    }

    void honk() {
        cout << "Honking the horn!" << endl;
    }
};

int main() {
    Car myCar;
    Car& carRef = myCar;    // Create a reference to the Car object

    carRef.drive();         // Accessing method via reference
    carRef.honk();

    return 0;
}

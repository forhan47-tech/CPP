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
    Car& ref = myCar;    // Create a reference to the Car object

    ref.drive();         
    ref.honk();

    // Show that both refer to the same object
    cout << "Address of myCar: " << &myCar << endl;
    cout << "Address of carRef: " << &ref << endl;

    return 0;
}

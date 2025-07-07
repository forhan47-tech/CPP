#include <iostream>
using namespace std;

class Car {
public:
    string model;

    void show() const {
        cout << "Model: " << model << endl;
    }
};

void updateModel(Car &refCar) {
    refCar.model = "Tesla";
}

int main() {
    Car car1;
    car1.model = "Nissan";

    updateModel(car1); // car1 passed by reference
    car1.show();       // Output: Model: Tesla

    return 0;
}

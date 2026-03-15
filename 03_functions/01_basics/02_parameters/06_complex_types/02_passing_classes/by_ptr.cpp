#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) {}
};

void renameCar(Car *c, string newModel) { // pointer
    c->model = newModel;
}

int main() {
    Car myCar("Ford");
    renameCar(&myCar, "Tesla"); // pass address
    cout << "Outside: " << myCar.model << endl;
}

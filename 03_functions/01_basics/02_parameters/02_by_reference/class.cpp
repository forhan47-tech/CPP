#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) {}
};

void renameCar(Car &c, string newModel) { // reference
    c.model = newModel;
}

int main() {
    Car myCar("Honda");
    renameCar(myCar, "BMW");
    cout << "Outside: " << myCar.model << endl;
}

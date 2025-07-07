#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base" << endl;
    }
};

class Derived : public Base {
public:
    void greet() {
        cout << "Hello from Derived" << endl;
    }

    void callBase() {
        Base::greet(); // Calls the base class version
    }
};

int main() {
    Derived obj;
    obj.greet();     // Outputs: Hello from Derived
    obj.callBase();  // Outputs: Hello from Base
    return 0;
}

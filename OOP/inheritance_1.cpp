#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
        cout << "This is the Base class" << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    void display() {
        cout << "This is the Derived class" << endl;
    }
};

int main() {
    Derived d;

    d.show();     // Accessing inherited function from Base
    d.display();  // Calling Derived’s own function

    return 0;
}

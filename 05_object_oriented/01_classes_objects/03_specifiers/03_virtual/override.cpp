#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {   // virtual function
        cout << "Hello from Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {   // ensures correct overriding
        cout << "Hello from Derived" << endl;
    }
};

int main() {
    Base* b1 = new Derived();  
    b1->display();            
    delete b1;
}

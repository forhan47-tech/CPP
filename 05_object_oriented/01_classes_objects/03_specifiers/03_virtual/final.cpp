#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual function
        cout << "Hello from Base" << endl;
    }
};

class Derived : public Base {
public:
    void show() override final {   // prevents further overriding
        cout << "Hello from Derived" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();  
    delete b;
}

#include <iostream>
using namespace std;

class Base {
public:
    virtual void speak() {
        cout << "Speaking from Base" << endl;
    }
};

class Derived : public Base {
public:
    void speak() override {
        cout << "Speaking from Derived" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->speak();
    delete ptr;
    return 0;
}

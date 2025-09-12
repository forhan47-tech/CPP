#include <iostream>
using namespace std;

class Base {
public:
    virtual void greet() final {
        cout << "Greeting from Base" << endl;
    }
};

class Derived : public Base {
    // void greet() override {}  // ❌ Error: Cannot override final function
};

int main() {
    Derived d;
    d.greet();
    return 0;
}

#include <iostream>
using namespace std;

class Base {
protected:
    void greet() {
        cout << "Hello from Base!" << endl;
    }
};

class Derived : public Base { // 👈 public inheritance
public:
    void wave() {
        cout << "Hi from Derived!" << endl;
    }

    void callGreet() {
        greet(); // ✅ still accessible inside Derived
    }
};

int main() {
    Derived d;

    // d.greet(); ❌ Still an error: greet() is protected in Base
    d.callGreet(); // ✅ wrapper method
    d.wave();      // ✅ works fine
    return 0;
}

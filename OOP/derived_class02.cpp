#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base!" << endl;
    }
};

class Derived : protected Base { // 👈 protected inheritance
public:
    void wave() {
        cout << "Hi from Derived!" << endl;
    }

    void callGreet() {
        greet(); // ✅ accessible inside Derived
    }
};

int main() {
    Derived d;

    // d.greet(); ❌ Error: greet() is protected in Derived
    d.callGreet(); // ✅ wrapper method
    d.wave();      // ✅ works fine
    return 0;
}

#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base!" << endl;
    }
};

class Derived : private Base { // 👈 private inheritance
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
    
    // d.greet(); ❌ Error: greet() is private in Derived
    d.callGreet(); // ✅ wrapper method
    d.wave();      // ✅ works fine
    return 0;
}

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void breathe() {
        cout << "Breathing...\n";
    }
protected:
    void eat() {
        cout << "Eating food...\n";
    }
private:
    void sleep() {
        cout << "Sleeping...\n";
    }
};

// Derived class using public inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Woof! Woof!\n";
    }

    void useProtected() {
        breathe();  // ✅ accessible: stays public
        eat();      // ✅ accessible: still protected inside Dog
        // sleep();  ❌ still inaccessible
    }
};

int main() {
    Dog d;
    d.bark();         // ✅ Dog’s method
    d.breathe();      // ✅ inherited public method
    d.useProtected(); // ✅ calls inherited protected function internally

    // d.eat();       ❌ Error: protected, not accessible from outside
    // d.sleep();     ❌ Error: private, not inherited

    return 0;
}

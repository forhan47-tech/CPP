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

// Derived class using protected inheritance
class Dog : protected Animal {
public:
    void bark() {
        cout << "Woof! Woof!\n";
    }

    void useProtected() {
        breathe();  // ✅ was public in Animal → now protected in Dog
        eat();      // ✅ still protected
        // sleep();  ❌ still inaccessible
    }
};

int main() {
    Dog d;
    d.bark();            // ✅ Dog’s own public method
    d.useProtected();    // ✅ safe access inside Dog

    // d.breathe();      ❌ Error: now protected in Dog
    // d.eat();          ❌ Error: remains protected
    // d.sleep();        ❌ Error: private in Animal

    return 0;
}

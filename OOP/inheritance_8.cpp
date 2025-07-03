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

// Derived class using private inheritance
class Dog : private Animal {
public:
    void bark() {
        cout << "Woof! Woof!\n";
    }

    void usePrivate() {
        breathe();  // ✅ public → private in Dog
        eat();      // ✅ protected → private in Dog
        // sleep();  ❌ Not accessible: private in Animal
    }
};

int main() {
    Dog d;
    d.bark();          // ✅ Dog’s own method
    d.usePrivate();    // ✅ Calls internal access to Animal members

    // d.breathe();    ❌ Error: now private in Dog
    // d.eat();        ❌ Error: became private
    // d.sleep();      ❌ Error: never inherited

    return 0;
}

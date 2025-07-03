#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void breathe() {
        cout << "Breathing...\n";
    }
};

// Derived class 1
class Bird : public Animal {
public:
    void fly() {
        cout << "Flying in the sky\n";
    }
};

// Derived class 2
class Fish : public Animal {
public:
    void swim() {
        cout << "Swimming in water\n";
    }
};

int main() {
    Bird b;
    Fish f;

    b.breathe();  // Inherited from Animal
    b.fly();      // Own method

    f.breathe();  // Inherited from Animal
    f.swim();     // Own method

    return 0;
}

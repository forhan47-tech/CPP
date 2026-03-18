#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating food..." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Walking on land..." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Woof Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;
}

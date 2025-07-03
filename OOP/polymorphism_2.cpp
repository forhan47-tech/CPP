#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound.\n";
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says: Woof!\n";
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says: Meow!\n";
    }
};

int main() {
    Animal* ptr;

    Dog d;
    Cat c;

    ptr = &d;
    ptr->speak();  // Output: Dog says: Woof!

    ptr = &c;
    ptr->speak();  // Output: Cat says: Meow!

    return 0;
}

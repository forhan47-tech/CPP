#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks..." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* ptr;
    Cat kitty;
    ptr = &kitty;

    ptr->speak();  // Output: Meow!
    return 0;
}

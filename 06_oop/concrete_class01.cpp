#include <iostream>
using namespace std;

class Dog {
public:
    void bark() {
        cout << "Woof Woof!" << endl;
    }

    void eat() {
        cout << "Dog is eating..." << endl;
    }
};

int main() {
    Dog d1;   // ✅ Object creation possible
    d1.bark();
    d1.eat();
    return 0;
}


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound..." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog d;
    d.speak(); 
    return 0;
}

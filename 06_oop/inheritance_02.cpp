#include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    void greet() {
        cout << "Hello from Parent" << endl;
    }
};

// Child class inherits from Parent
class Child : public Parent {
public:
    void play() {
        cout << "Child is playing" << endl;
    }
};

int main() {
    Child c;

    cout << "Single Inheritance Example:" << endl;
    c.greet();  // Inherited from Parent
    c.play();   // Defined in Child
    return 0;
}

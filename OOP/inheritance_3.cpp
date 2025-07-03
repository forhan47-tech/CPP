#include <iostream>
using namespace std;

// Grandparent class
class Grandparent {
public:
    void legacy() {
        cout << "Passing on family legacy.\n";
    }
};

// Parent class inherits from Grandparent
class Parent : public Grandparent {
public:
    void guide() {
        cout << "Offering parental guidance.\n";
    }
};

// Child class inherits from Parent
class Child : public Parent {
public:
    void dream() {
        cout << "Chasing child’s dreams.\n";
    }
};

int main() {
    Child c;

    c.legacy();  // Inherited from Grandparent
    c.guide();   // Inherited from Parent
    c.dream();   // Defined in Child

    return 0;
}

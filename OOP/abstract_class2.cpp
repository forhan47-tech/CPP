#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    // Shape s;              ❌ Not allowed — abstract!
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  // Output: Drawing Circle
    s2->draw();  // Output: Drawing Square

    delete s1;
    delete s2;

    return 0;
}

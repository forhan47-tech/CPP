#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle\n";
    }
};

int main() {
    Shape* shapes[2];  // Array of base class pointers
    Circle c;
    Rectangle r;

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();  // Runtime polymorphism in action
    }

    return 0;
}

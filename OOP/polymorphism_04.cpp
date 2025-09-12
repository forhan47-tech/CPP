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
    Circle c;
    Rectangle r;

    c.draw(); 
    r.draw();     
    return 0;
}

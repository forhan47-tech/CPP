#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;           // pure virtual function
    virtual double area() = 0;         // another pure virtual function
    virtual ~Shape() {}                // virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    double area() override {
        return 3.1416 * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
    double area() override {
        return width * height;
    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 6.0);

    s1->draw();                      // Drawing Circle
    cout << "Area: " << s1->area() << endl;

    s2->draw();                      // Drawing Rectangle
    cout << "Area: " << s2->area() << endl;

    delete s1;
    delete s2;

    return 0;
}

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.1416 * radius * radius;
    }

    void draw() override {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

int main() {
    Shape* shape = new Circle(5.0);

    shape->draw();  // Runtime polymorphism
    cout << "Area: " << shape->area() << " sq.units" << endl;

    delete shape;   // Clean up
    return 0;
}

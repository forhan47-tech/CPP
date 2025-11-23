#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual double area() = 0;        
    virtual ~Shape() {}           
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
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
    
    double area() override {
        return width * height;
    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 6.0);

    cout << "Area: " << s1->area() << endl;
    cout << "Area: " << s2->area() << endl;

    delete s1;
    delete s2;

    return 0;
}

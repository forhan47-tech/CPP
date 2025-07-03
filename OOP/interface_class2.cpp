#include <iostream>
using namespace std;

class IShape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~IShape() {}
};

class Rectangle : public IShape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }

    double perimeter() override {
        return 2 * (width + height);
    }
};

int main() {
    IShape* shape = new Rectangle(5.0, 3.0);
    cout << "Area: " << shape->area() << endl;
    cout << "Perimeter: " << shape->perimeter() << endl;
    delete shape;
    return 0;
}

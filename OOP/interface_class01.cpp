#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
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
    Shape* shp = new Rectangle(5.0, 3.0);

    cout << "Area: " << shp->area() << endl;
    cout << "Perimeter: " << shp->perimeter() << endl;
    
    delete shape;
    return 0;
}

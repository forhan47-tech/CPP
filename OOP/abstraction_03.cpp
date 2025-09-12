#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }

    void display() const override {
        cout << "Rectangle Area: " << getArea() << endl;
    }
};

int main() {
    Shape* s = new Rectangle(5.0, 3.0); 

    s->display(); // Polymorphic call
    delete s;
    return 0;
}

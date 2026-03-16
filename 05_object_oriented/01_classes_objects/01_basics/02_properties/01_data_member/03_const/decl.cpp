#include <iostream>
using namespace std;

class Circle {
public:
    const double PI = 3.14159;  // data member
    double radius;

    Circle(double r) : radius(r) {}

    double area() {
        return PI * radius * radius;
    }
};

int main() {
    Circle c1(5);
    cout << "Area: " << c1.area() << endl;
    return 0;
}

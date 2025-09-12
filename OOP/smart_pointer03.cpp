#include <iostream>
#include <memory>
using namespace std;

class Circle {
public:
    Circle(double r) : radius(r) {}
    double area() const { return 3.1416 * radius * radius; }
private:
    double radius;
};

int main() {
    shared_ptr<Circle> c1 = make_shared<Circle>(2.5);
    shared_ptr<Circle> c2 = c1;

    cout << "Area: " << c2->area() << endl;
    cout << "Use count: " << c1.use_count() << endl;
    return 0;
}

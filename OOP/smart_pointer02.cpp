#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int l, int b) : length(l), width(b) {}
    int area() const { return length * width; }
};

int main() {
    unique_ptr<Rectangle> r = make_unique<Rectangle>(10, 5);
    cout << "Area: " << r->area() << endl;
    return 0;
}

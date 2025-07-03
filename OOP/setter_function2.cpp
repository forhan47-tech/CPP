#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() {
        return width * height;
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5.0, 3.0);

    cout << "Area: " << r.getArea() << endl;

    return 0;
}

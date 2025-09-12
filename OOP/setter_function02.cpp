#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    void setData(double w, double h) { // setter function
        width = w;
        height = h;
    }

    double getArea() const { // const member function
        return width * height;
    }
};

int main() {
    Rectangle r;
    r.setData(5.0, 3.0);

    cout << "Area: " << r.getArea() << endl;
    return 0;
}

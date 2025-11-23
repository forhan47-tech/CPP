#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    Rectangle() : width(0), height(0) {} // Default constructor

    Rectangle(double w, double h) : width(w), height(h) {} // Parameterized constructor

    double getArea() const {
        return width * height;
    }
};

int main() {
    Rectangle r1;               // Default rectangle
    Rectangle r2(5.0, 3.0);     // Custom rectangle

    cout << "--- Rectangle r1 ---" << endl;
    cout << "Area: " << r1.getArea() << endl;

    cout << "\n--- Rectangle r2 ---" << endl;
    cout << "Area: " << r2.getArea() << endl;

    return 0;
}

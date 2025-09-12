#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {} // Parameterized constructor

    int area() const { 
        return width * height; 
    }
};

int main() {
    Rectangle r(4, 5);
    cout << "Area: " << r.area() << endl;
    return 0;
}

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    void area() {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    Rectangle r(4, 5);
    r.area();
    return 0;
}

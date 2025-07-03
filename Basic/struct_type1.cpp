#include <iostream>
using namespace std;

struct Rectangle {
    int width, height;

    // Function inside struct
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle r = {5, 10};
    cout << "Area: " << r.area() << endl;
    return 0;
}

#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a=0, int b=0): x(a), y(b) {}

    Vector& operator-=(const Vector& v) {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    void display() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main() {
    Vector v1(10, 8), v2(4, 5);
    v1 -= v2;   // uses overloaded -=
    v1.display();  
}

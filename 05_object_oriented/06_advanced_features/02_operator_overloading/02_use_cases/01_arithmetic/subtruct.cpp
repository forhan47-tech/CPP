#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a=0, int b=0): x(a), y(b) {}

    Vector operator-(const Vector& v) {
        return Vector(x - v.x, y - v.y);
    }

    void display() { 
        cout << "(" << x << ", " << y << ")" << endl; 
    }
};

int main() {
    Vector v1(5, 3), v2(2, 1);
    Vector v3 = v1 - v2;
    v3.display();  
}

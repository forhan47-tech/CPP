#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    Point p1(5, 10);

    Point p2 = p1;  // Compiler-generated copy constructor
    cout << p2.x << ", " << p2.y << endl;
    
    return 0;
}

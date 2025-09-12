#include <iostream>
using namespace std;

class Point {
    int x, y;
    
public:
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    Point obj1(5, 10);

    Point obj2 = obj1;  // Compiler-generated copy constructor
    cout << obj2.x << ", " << obj2.y << endl;  
    return 0;
}

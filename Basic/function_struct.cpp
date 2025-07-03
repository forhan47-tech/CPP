#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

// Function that modifies Point by reference
void modify(Point &p) {
    p.x += 1;
    p.y += 1;
}

int main() {
    Point p1 = {3, 4};

    modify(p1); // Passing structure by reference
    cout << "After modification: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}

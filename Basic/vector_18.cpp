#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

int main() {
    vector<Point> points;
    points.emplace_back(1, 2); // Avoids extra copy

    cout << "Point: (" << points[0].x << ", " << points[0].y << ")" << endl;

    return 0;
}

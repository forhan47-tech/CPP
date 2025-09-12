#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class CircleArea {
    double radius;
    static mutex logMutex; // Static mutex shared across all instances

public:
    CircleArea(double r) : radius(r) {}

    void operator()() {
        double area = 3.1416 * radius * radius;
        lock_guard<mutex> lock(logMutex);
        cout << "Area of circle with radius " << radius << " is: " << area << endl;
    }
};

// Define the static mutex outside the class
mutex CircleArea::logMutex;

int main() {
    CircleArea calc1(5.0);
    CircleArea calc2(7.0);

    thread t1(calc1);
    thread t2(calc2);

    t1.join();
    t2.join();
    return 0;
}

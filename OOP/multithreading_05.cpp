#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class CircleArea {
    mutex logMutex; // Instance-level mutex

public:
    void operator()(double radius) {
        double area = 3.1416 * radius * radius;
        lock_guard<mutex> lock(logMutex);  // Lock the mutex before logging
        cout << "Area of circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {
    CircleArea calc;

    thread t(calc, 5.0); 
    t.join();
    cout << "Main thread finished.\n";
    return 0;
}

#include <iostream>
#include <thread>
using namespace std;

class CircleArea {
public:
    void operator()(double radius) {
        double area = 3.1416 * radius * radius;
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

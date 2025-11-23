#include <iostream>
#include <thread>
using namespace std;

class CircleArea {
    double radius;
public:
    CircleArea(double r) : radius(r) {}

    void operator()() {
        double area = 3.1416 * radius * radius;
        cout << "Area of circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {
    CircleArea calc(5.0); 

    thread t(calc);      
    t.join();
    cout << "Main thread finished.\n";
    return 0;
}

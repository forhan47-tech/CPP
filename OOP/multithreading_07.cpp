#include <iostream>
#include <future>
using namespace std;

class AreaCalculator {
public:
    double operator()(int radius) const {
        return 3.1416 * radius * radius;
    }
};

int main() {
    AreaCalculator calc;

    // Launch asynchronously and get future
    future<double> result = async(launch::async, calc, 5);
    // Do other work here...
    cout << "Area of circle with radius 5 is " << result.get() << endl;
    cout << "Main thread finished.\n";
    return 0;
}

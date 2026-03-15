#include <iostream>
using namespace std;

double average(double x, double y) {
    return (x + y) / 2.0; // returns a double
}

int main() {
    cout << "Average = " << average(10.5, 20.5) << endl;
}

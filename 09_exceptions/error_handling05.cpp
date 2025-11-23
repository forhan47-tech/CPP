#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "Division by zero error!";
    return a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl;
        cout << divide(5, 0) << endl;  // Exception thrown here
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
}

#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) throw "Division by zero!";
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    } catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }
}
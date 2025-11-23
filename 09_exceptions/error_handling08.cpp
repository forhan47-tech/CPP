#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw invalid_argument("Cannot divide by zero");
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}

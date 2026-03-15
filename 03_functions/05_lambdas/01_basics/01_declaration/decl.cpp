#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Lambda with capture, parameters, and return type
    auto sum = [=](int x, int y) -> int {
        return a + b + x + y;
    };

    cout << "Result = " << sum(5, 5) << endl; 
}

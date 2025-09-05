#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    auto sum = [=]() { 
        return x + y; 
    };     // Captures x and y by value

    auto diff = [&]() { 
        return x - y; 
    };    // Captures x and y by reference

    cout << "Sum: " << sum() << endl;       // Output: 30

    // Let's change x and y now
    x = 50;
    y = 15;

    cout << "Sum (again): " << sum() << endl;    // Still 30 (captured earlier)
    cout << "Difference: " << diff() << endl;    // 50 - 15 = 35

    return 0;
}

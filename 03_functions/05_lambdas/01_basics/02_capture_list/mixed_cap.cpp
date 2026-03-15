#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto mixed = [=, &b]() {
        b += 5; // modifies b by reference
        return a + b; // a is captured by value
    };

    cout << "Mixed capture: " << mixed() << endl; 
    cout << "Updated b: " << b << endl;
}

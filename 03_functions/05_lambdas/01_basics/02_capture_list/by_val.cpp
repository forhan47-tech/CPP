#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto byValue = [=]() {
        return a + b; // uses copies of a and b
    };

    cout << "By value: " << byValue() << endl; 
}

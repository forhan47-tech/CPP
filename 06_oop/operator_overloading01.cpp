#include <iostream>
using namespace std;

class Example {
public:
    int value;
    Example(int v) : value(v) {}

    // Overloading +
    Example operator+(const Example& obj) {
        return Example(this->value + obj.value);
    }

    // Overloading -
    Example operator-(const Example& obj) {
        return Example(this->value - obj.value);
    }
};

int main() {
    Example obj1(10), obj2(5);

    Example sum = obj1 + obj2;  // ✅ Calls operator+
    Example diff = obj1 - obj2; // ✅ Calls operator-

    cout << "Sum: " << sum.value << endl;
    cout << "Difference: " << diff.value << endl;
    return 0;
}


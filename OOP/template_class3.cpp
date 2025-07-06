#include <iostream>
using namespace std;

// Generic template
template <typename T>
class Box {
public:
    void show() {
        cout << "Generic Box of type T" << endl;
    }
};

// Full specialization for bool
template <>
class Box<bool> {
public:
    void show() {
        cout << "Specialized Box for boolean!" << endl;
    }
};

int main() {
    Box<int> intBox;
    intBox.show(); // Output: Generic Box of type T

    Box<bool> boolBox;
    boolBox.show(); // Output: Specialized Box for boolean!

    return 0;
}

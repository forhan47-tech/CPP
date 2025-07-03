#include <iostream>
using namespace std;

class Box {
    int length;

public:
    // Default constructor using initializer list
    Box() : length(0) {}

    // Parameterized constructor using initializer list
    Box(int l) : length(l) {}

    void show() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b1, b2(25); // b1 uses default constructor, b2 uses parameterized constructor

    b1.show();
    b2.show();

    return 0;
}

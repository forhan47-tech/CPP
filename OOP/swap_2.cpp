#include <iostream>
#include <utility>  // For std::swap
using namespace std;

class Example {
private:
    int value;

public:
    Example(int v = 0) : value(v) {}

    void show() const {
        cout << "Value: " << value << endl;
    }

    // Member-wise swap function
    void swap(Example& other) {
        std::swap(this->value, other.value);
    }

    // Optional: getter (if value is private)
    int getValue() const { return value; }
};

int main() {
    Example obj1(100), obj2(200);

    // Swap using member function
    obj1.swap(obj2);

    cout << "\nAfter Swap:" << endl;
    obj1.show();
    obj2.show();

    return 0;
}

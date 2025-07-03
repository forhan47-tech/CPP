#include <iostream>
using namespace std;

// Template class to demonstrate a simple box
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}  // Constructor

    void show() { cout << "Stored Value: " << value << endl; }
};

int main() {
    Box<int> intBox(100);    // Box holding an int
    Box<double> doubleBox(5.75);  // Box holding a double
    Box<string> strBox("Hello");

    intBox.show();
    doubleBox.show();
    strBox.show();

    return 0;
}


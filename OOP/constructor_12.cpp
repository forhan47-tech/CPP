#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    Demo(int v) : value(v) {}

    Demo(const Demo& other) {
        value = other.value;
        cout << "Copy constructor called" << endl;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Demo a(10);
    Demo b = a;  // Copy constructor
    b.show();
    return 0;
}

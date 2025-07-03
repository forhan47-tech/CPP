#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called\n";
        initialize();  // Calls internal setup function
    }

private:
    void initialize() {
        cout << "initialize() called inside constructor\n";
    }
};

int main() {
    MyClass obj;  // Object creation triggers constructor
    return 0;
}

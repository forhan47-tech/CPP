#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
    Test() { cout << "Object Created\n"; }
    ~Test() { cout << "Object Destroyed\n"; }
    void show() { cout << "Hello from Test!\n"; }
};

int main() {
    unique_ptr<Test> ptr = make_unique<Test>(); // Creating an object dynamically
    ptr->show(); // Accessing member function

    return 0; // Automatically cleans up the object
}

#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Allocating a unique pointer
    unique_ptr<int> ptr = make_unique<int>(10);

    cout << "Value: " << *ptr << endl; // Access value

    return 0;
} // Automatically deletes the object at scope exit

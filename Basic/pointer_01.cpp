#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* ptr = &x; // Pointer stores address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* ptr = &x; // declare and initialize

    cout << "Address of x: " << ptr << endl;
    cout << "Value of x: " << *ptr << endl;
}

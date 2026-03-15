#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;

    int x = 42;
    cout << "Size of variable x: " << sizeof(x) << endl;

    return 0;
}

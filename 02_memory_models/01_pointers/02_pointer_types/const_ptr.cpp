#include <iostream>
using namespace std;

int main() {
    int x = 100;
    const int* ptr = &x; // can't modify
    cout << "Value <-> " << *ptr << endl;
}
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << ++n << endl; // Pre-increment → 6
    cout << n++ << endl; // Post-increment → prints 6, then n=7
    cout << --n << endl; // Pre-decrement → 6
    cout << n-- << endl; // Post-decrement → prints 6, then n=5
    return 0;
}

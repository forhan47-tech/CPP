#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 3; // 6 = 110, 3 = 011
    cout << (a & b) << endl;  // AND → 010 = 2
    cout << (a | b) << endl;  // OR  → 111 = 7
    cout << (a ^ b) << endl;  // XOR → 101 = 5
    cout << (a << 1) << endl; // Left shift → 12
    cout << (a >> 1) << endl; // Right shift → 3
    return 0;
}

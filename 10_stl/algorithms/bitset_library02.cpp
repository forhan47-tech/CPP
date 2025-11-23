#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b1(42), b2(15); 
    
    cout << "Bitset b1: " << b1 << endl;
    cout << "Bitset b2: " << b2 << endl;

    // Bitwise AND operation
    cout << "Bitwise AND (b1 & b2): " << (b1 & b2) << endl;

    // Bitwise OR operation
    cout << "Bitwise OR (b1 | b2): " << (b1 | b2) << endl;

    // Bitwise XOR operation
    cout << "Bitwise XOR (b1 ^ b2): " << (b1 ^ b2) << endl;

    // Bitwise NOT operation
    cout << "Bitwise NOT (~b1): " << (~b1) << endl;

    // Left shift operation
    cout << "Left shift (b1 << 2): " << (b1 << 2) << endl;

    // Right shift operation
    cout << "Right shift (b1 >> 2): " << (b1 >> 2) << endl;

    return 0;
}


#include <iostream>
#include <bitset> // For binary representation
using namespace std;

int main() {
    int num1 = 255;
    int num2 = 6;

    // Display numbers in different bases
    cout << "Hexadecimal: " << hex << num1 << endl;    // Prints "ff"
    cout << "Octal: " << oct << num1 << endl;          // Prints "377"
    cout << "Decimal (default): " << num1 << endl;     // Prints "255"

    // Binary Representation using std::bitset(4bits, 8bits, 16bits, 32bits, 64bits)
    cout << "\nBinary Representation:" << endl;
    cout << "num2 (4-bits view): " << bitset<4>(num2) << endl;  // Prints "0110"
    cout << "num2 (8-bits view): " << bitset<8>(num2) << endl;  // Prints "00000110"
    
    return 0;
}


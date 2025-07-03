#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // Default initialization: all bits set to 0
    bitset<8> b1; // 00000000
    cout << "Default bitset (b1): " << b1 << endl;

    // Custom initialization
    bitset<8> bits(42); // Represents the number 42 in binary (00101010)
    cout << "Original bits: " << bits << endl;

    bitset<8> bits2("10101010"); // Initialize from a binary string
    cout << "bits2: " << bits2 << endl;

    // Access the 2nd bit
    bool bit = bits[2]; // Accesses the 2nd bit
    cout << "The 2nd bit is: " << bit << endl;

    // Counting bits
    cout << "Number of set bits: " << bits.count() << endl;
    cout << "Size of bitset: " << bits.size() << endl;

    // Convert to different number systems
    cout << "As integer: " << bits.to_ulong() << endl;
    cout << "As string: " << bits.to_string() << endl;

    return 0;
}


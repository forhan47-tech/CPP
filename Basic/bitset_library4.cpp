#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<8> bits(42); // Binary representation: 00101010
    cout << "Original bits: " << bits << endl;

    // Modify bits
    bits.set(0);       // Set the 0th bit
    cout << "After setting 0th bit: " << bits << endl;

    bits.set();        // Set all bits
    cout << "After setting all bits: " << bits << endl;

    bits.reset(3);     // Reset the 3rd bit
    cout << "After resetting 3rd bit: " << bits << endl;

    bits.reset();      // Reset all bits
    cout << "After resetting all bits: " << bits << endl;

    bits.flip(1);      // Flip the 1st bit
    cout << "After flipping 1st bit: " << bits << endl;

    bits.flip();       // Flip all bits
    cout << "After flipping all bits: " << bits << endl;

    return 0;
}


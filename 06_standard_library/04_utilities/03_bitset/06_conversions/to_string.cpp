#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(42); // 00101010
    cout << "As string: " << b.to_string() << endl; 
    cout << "Custom string: " << b.to_string('X','O') << endl; 
}

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(0); 

    b.flip(1);  // flip bit at index 1 to 1
    cout << b << endl;

    b.flip();  // flip all bits 
    cout << b << endl;
}

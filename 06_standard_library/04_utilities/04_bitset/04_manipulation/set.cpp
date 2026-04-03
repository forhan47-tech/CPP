#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b;

    b.set(3); // set bit at index 3 to 1
    cout << b << endl;

    b.set(5, 1); // set bit at index 5 to 1
    cout << b << endl;
    
    b.set(); // set all bits to 1
    cout << b << endl;
}

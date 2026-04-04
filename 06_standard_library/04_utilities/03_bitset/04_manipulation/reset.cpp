#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(255); 

    b.reset(2);  // reset bit at index 2 to 0
    cout << b << endl;

    b.reset();  // reset all bits to 0     
    cout << b << endl;
}

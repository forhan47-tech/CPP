#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(42); // 00101010
    cout << "Number of 1s: " << b.count() << endl; 
}

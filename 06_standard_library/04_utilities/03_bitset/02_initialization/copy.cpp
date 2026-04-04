#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b1(15);   
    bitset<8> b2(b1);  // copy constructor
    cout << b2 << endl;
}

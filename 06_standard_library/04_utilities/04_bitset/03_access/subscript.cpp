#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(42); 
    cout << b[1] << endl; 

    b[3] = 1;    // set bit at index 3
    cout << b << endl;
}

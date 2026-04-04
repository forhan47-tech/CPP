#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(42); 
    
    for (size_t i = 0; i < b.size(); i++) {
        cout << "Bit " << i << ": " << b[i] << endl;
    }
}

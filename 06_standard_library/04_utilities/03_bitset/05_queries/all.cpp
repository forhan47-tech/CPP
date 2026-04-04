#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(255); 
    cout << "All set? " << b.all() << endl; 
}

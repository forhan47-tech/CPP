#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b(0);
    cout << "None set? " << b.none() << endl; // 1 (true)
}

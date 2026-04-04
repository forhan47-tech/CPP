#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> a(3); // 00000011
    cout << (a << 2) << endl; // 00001100
}

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> a(12); // 00001100
    bitset<8> b(10); // 00001010
    cout << (a | b) << endl; // 00001110
}

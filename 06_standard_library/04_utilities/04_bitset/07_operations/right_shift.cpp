#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> a(12); // 00001100
    cout << (a >> 2) << endl; // 00000011
}

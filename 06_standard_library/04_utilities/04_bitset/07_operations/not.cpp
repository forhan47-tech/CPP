#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> a(12); // 00001100
    cout << (~a) << endl; // 11110011
}

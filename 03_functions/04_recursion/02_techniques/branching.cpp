#include <iostream>
using namespace std;

void bit_seq(int n, string pfx = "") {
    if (n == 0) {
        cout << pfx << endl;  // base case
        return;
    }
    bit_seq(n-1, pfx + "0");  // include '0'
    bit_seq(n-1, pfx + "1");  // include '1'
}

int main() {
    bit_seq(3);
}
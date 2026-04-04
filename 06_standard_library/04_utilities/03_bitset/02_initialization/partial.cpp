#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string s = "110011";
    bitset<8> b(s, 2, 4); // take substring "0011"
    cout << b << endl;    
}

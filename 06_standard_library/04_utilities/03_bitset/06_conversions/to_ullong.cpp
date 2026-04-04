#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<64> b(123456789);
    cout << "As unsigned long long: " << b.to_ullong() << endl;
}

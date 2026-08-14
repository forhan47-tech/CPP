#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);  // tail call
}

int main() {
    cout << gcd(48, 18) << endl;
}

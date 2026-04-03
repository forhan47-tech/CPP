#include <iostream>
#include <numeric> // for gcd
using namespace std;

int main() {
    int a = 36, b = 60;
    cout << "gcd(" << a << "," << b << ") = " << gcd(a,b) << endl;
}

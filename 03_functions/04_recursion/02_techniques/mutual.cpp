#include <iostream>
using namespace std;

bool isOdd(int n);  // Forward declaration

bool isEven(int n) {
    if (n == 0) return true;
    return isOdd(n - 1);  // Call isOdd
}

bool isOdd(int n) {
    if (n == 0) return false;
    return isEven(n - 1);  // Call isEven
}

int main() {
    cout << (isEven(4) ? "Even" : "Odd") << endl;
    return 0;
}

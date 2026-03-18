#include <iostream>
using namespace std;

void tailRecursion(int n) {
    if (n == 0) return;
    cout << n << " ";
    tailRecursion(n - 1); // Last operation
}

int main() {
    tailRecursion(5);
    return 0;
}

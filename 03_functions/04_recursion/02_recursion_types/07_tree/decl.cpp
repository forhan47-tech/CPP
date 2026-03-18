#include <iostream>
using namespace std;

int treeRec(int n) {
    if (n <= 1) return n;
    return treeRec(n - 1) + treeRec(n - 2); // multiple recursive calls
}

int main() {
    cout << "Fibonacci(6) = " << treeRec(6);
    return 0;
}

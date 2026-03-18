#include <iostream>
using namespace std;

int nestedRec(int n) {
    if (n > 100) return n - 10;
    return nestedRec(nestedRec(n + 11)); // Recursive call
}

int main() {
    cout << "Result: " << nestedRec(95);
    return 0;
}

#include <iostream>
using namespace std;

void tailRec(int n) {
    if (n == 0) return;
    cout << n << " ";
    tailRec(n - 1); // last operation
}

int main() {
    tailRec(5);
    return 0;
}

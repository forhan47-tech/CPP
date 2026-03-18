#include <iostream>
using namespace std;

void headRec(int n) {
    if (n == 0) return;
    headRec(n - 1); // first operation
    cout << n << " ";  
}

int main() {
    headRec(5);
    return 0;
}

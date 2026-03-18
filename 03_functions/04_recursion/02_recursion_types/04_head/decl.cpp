#include <iostream>
using namespace std;

void headRecursion(int n) {
    if (n == 0) return;
    headRecursion(n - 1); 
    cout << n << " ";       // Work after recursion
}

int main() {
    headRecursion(5);
    return 0;
}

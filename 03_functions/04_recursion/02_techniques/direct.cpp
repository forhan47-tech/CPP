#include <iostream>
using namespace std;

void directRecursion(int n) {
    if (n <= 0) return; // base case
    cout << n << " ";
    directRecursion(n - 1); // direct call
}

int main() {
    directRecursion(5); 
}

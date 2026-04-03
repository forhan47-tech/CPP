#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;       // base case
    return n * factorial(n-1);  // recursive case
}

int main() {
    cout << factorial(5) << endl; 
}

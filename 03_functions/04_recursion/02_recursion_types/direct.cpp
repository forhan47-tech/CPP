#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;       
    return n * factorial(n-1); // calls itself
}

int main() {
    cout << factorial(5) << endl; 
}

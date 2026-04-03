#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;             // base case
    return fibonacci(n-1) + fibonacci(n-2); // two recursive calls
}

int main() {
    cout << fibonacci(6) << endl; 
}

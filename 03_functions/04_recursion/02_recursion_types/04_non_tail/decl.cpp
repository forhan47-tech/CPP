#include <iostream>
using namespace std;

int nonTailRec(int n) {
    if (n == 0) return 1;           
    return n * nonTailRec(n - 1); // recursive call followed by other operation
}

int main() {
    cout << "Factorial of 5: " << nonTailRec(5); 
    return 0;
}

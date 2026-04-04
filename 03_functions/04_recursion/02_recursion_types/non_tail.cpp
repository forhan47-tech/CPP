#include <iostream>
using namespace std;

int nonTailSum(int n) {
    if (n == 0) return 0;   
    int result = nonTailSum(n - 1); 
    return result + n;        // work after recursion
}

int main() {
    cout << nonTailSum(5) << endl; 
}

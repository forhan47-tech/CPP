#include <iostream>
using namespace std;

int sumHead(int n) {
    if (n == 0) return 0;     // base case
    int result = sumHead(n - 1); // recursive call first
    return result + n;        // work after recursion
}

int main() {
    cout << sumHead(5) << endl; 
}

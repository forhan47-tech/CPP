#include <iostream>
using namespace std;

int mcCarthy91(int n) {
    if (n > 100) return n - 10;                // base case
    return mcCarthy91(mcCarthy91(n + 11));     // nested recursion
}

int main() {
    cout << mcCarthy91(50) << endl; 
    cout << mcCarthy91(200) << endl; 
}

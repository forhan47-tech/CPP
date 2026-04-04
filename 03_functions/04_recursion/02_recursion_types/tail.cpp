#include <iostream>
using namespace std;

int sumTail(int n, int acc = 0) {
    if (n == 0) return acc;      
    return sumTail(n - 1, acc + n); // recursive call at end
}

int main() {
    cout << sumTail(5) << endl;
}

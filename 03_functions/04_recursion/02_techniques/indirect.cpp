#include <iostream>
using namespace std;

void funcB(int n); // Forward declaration

void funcA(int n) {
    if (n <= 0) return;
    cout << "A: " << n << endl;
    funcB(n - 1); // calls B
}

void funcB(int n) {
    if (n <= 0) return;
    cout << "B: " << n << endl;
    funcA(n - 1); // calls A
}

int main() {
    funcA(3);
}

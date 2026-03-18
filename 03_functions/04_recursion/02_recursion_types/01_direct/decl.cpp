#include <iostream>
using namespace std;

void directRec(int n) {
    if (n <= 0) return;
    cout << n << " ";
    directRec(n - 1); // direct call
}

int main() {
    directRec(5); 
}

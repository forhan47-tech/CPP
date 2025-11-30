#include <iostream>
using namespace std;

int square(int n) {
    return n * n; // returns result to caller
}

int main() {
    cout << "Square of 5 = " << square(5) << endl;
    return 0;
}

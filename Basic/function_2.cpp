#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}

int main() {
    cout << square(3) << endl;     // calls int version
    cout << square(2.5) << endl;   // calls double version
    return 0;
}

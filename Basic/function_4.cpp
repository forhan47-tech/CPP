#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(5, 10) << endl;     // Calls 2-parameter version
    cout << add(1, 2, 3) << endl;   // Calls 3-parameter version
    return 0;
}

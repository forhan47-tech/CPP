#include <iostream>
using namespace std;

void demo() {
    int local = 10; // not accessible outside
    cout << "Local variable: " << local << endl;
}

int main() {
    demo();
    return 0;
}

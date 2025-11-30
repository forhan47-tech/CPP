#include <iostream>
using namespace std;

void checkEven(int n) {
    if (n % 2 != 0) {
        cout << "Not even" << endl;
        return; // exit early
    }
    cout << "Even number" << endl;
}

int main() {
    checkEven(7);
    checkEven(10);
    return 0;
}

#include <iostream>
using namespace std;

void checkNumber(int n) {
    if (n < 0) {
        cout << "Negative number!" << endl;
        return; // exit early
    }
    cout << "Positive number!" << endl;
}

int main() {
    checkNumber(-5);
    checkNumber(10);
    return 0;
}

#include <iostream>
using namespace std;

int checkEven(int n) {
    if (n % 2 == 0) return 1; // return early if even
    return 0;                 // otherwise return 0
}

int main() {
    cout << "Check 4: " << checkEven(4) << endl;
    cout << "Check 5: " << checkEven(5) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c;

    c = (a++, b++); // a++ executes, then b++ executes, result = b++
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

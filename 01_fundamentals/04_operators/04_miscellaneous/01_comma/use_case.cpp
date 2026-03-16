#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 2, z;

    z = (x++, y++); // x++ executes first, then y++, result is the value of y++
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}
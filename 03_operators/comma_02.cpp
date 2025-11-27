#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10, z;

    z = (x += 2, y += 3); // First x updated, then y updated, result = y
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}

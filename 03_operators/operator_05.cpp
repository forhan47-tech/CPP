#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    x += 5;  // x = x + 5
    x -= 3;  // x = x - 3
    x *= 2;  // x = x * 2
    x /= 4;  // x = x / 4
    x %= 3;  // x = x % 3

    cout << "Final x = " << x << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 10; 
    cout << "Initial x: " << x << endl;

    x += 5;       // x = x + 5
    cout << "After += : " << x << endl;

    x -= 3;       // x = x - 3
    cout << "After -= : " << x << endl;

    x *= 2;       // x = x * 2
    cout << "After *= : " << x << endl;

    x /= 4;       // x = x / 4
    cout << "After /= : " << x << endl;

    x %= 3;       // x = x % 3
    cout << "After %= : " << x << endl;

    return 0;
}

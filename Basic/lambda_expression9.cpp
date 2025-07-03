#include <iostream>
using namespace std;

int main() {
    int x = 42, y = 100;

    auto lambda = [&x]() {
        x += 10;
        // y += 5;  // ❌ Error: 'y' is not captured
    };

    lambda();

    cout << x << endl;  // Output: 52

    return 0;
}

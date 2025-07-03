#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 4;

    auto custom = [x, &y]() {
        return x * y;  // x is captured by value, y by reference
    };

    y = 5;  // change y after lambda definition

    cout << "Result: " << custom() << endl;  // Output: 15

    return 0;
}

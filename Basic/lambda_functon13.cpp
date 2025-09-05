#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 4;

    auto custom = [x, &y]() {
        return x * y;  // x is captured by value, y by reference
    };
    
    x = 10; // change x after lambda definition
    y = 5;  // change y after lambda definition

    cout << "Result: " << custom() << endl;  // Outputs: 15 (3 * 5)

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    // Capture x by value, y by reference
    auto captureExample = [x, &y]() {
        cout << "Captured x (by value): " << x << endl;
        y += 5;  // Modify y directly
    };

    captureExample();

    cout << "Updated y (after lambda): " << y << endl;

    return 0;
}

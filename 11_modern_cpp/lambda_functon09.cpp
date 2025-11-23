#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    // Capture x by value, y by reference
    auto captureExample = [x, &y]() {
        cout << "Captured x (by value): " << x << endl;
        cout << "Captured y (by reference): " << y << endl;
 
    };

    y += 5;
    captureExample();
    cout << "Updated y (after lambda): " << y << endl;

    return 0;
}

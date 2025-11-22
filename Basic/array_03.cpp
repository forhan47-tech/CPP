#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Array of 5 integers

    cout << "First element: " << arr[0] << endl;
    cout << "Third element: " << arr[2] << endl;

    // Traversing array
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}

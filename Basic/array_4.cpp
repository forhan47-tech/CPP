#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr; // Declare fixed-size array

    cout << "Enter 5 numbers: ";
    
    // Range-based loop for user input
    for (int &num : arr) {
        cin >> num; // Taking user input
    }

    cout << "Array Elements: ";
    for (const int &num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

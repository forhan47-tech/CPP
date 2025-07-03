#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr; // Declare fixed-size array

    cout << "Enter 5 numbers: ";
    for (size_t i = 0; i < arr.size(); i++) {
        cin >> arr[i]; // Taking input from user
    }

    cout << "Array Elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

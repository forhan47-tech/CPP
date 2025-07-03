#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr; // Declare fixed-size array
    size_t i = 0; // Initialize index

    cout << "Enter 5 numbers: ";
    while (i < arr.size()) {
        cin >> arr[i]; // Input using index
        i++; // Move to next index
    }

    cout << "Stored Numbers: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

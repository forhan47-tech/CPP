#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr; // Fixed-size array
    size_t i = 0;       // Track entered numbers

    cout << "Enter up to 5 positive numbers (-1 to stop): ";

    while (i < arr.size()) {
        cin >> arr[i];
        if (arr[i] == -1) {
            break; // Stop if -1 is entered
        }
        i++; // Move to next index
    }

    cout << "Stored Numbers: ";
    for (size_t j = 0; j < i; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}

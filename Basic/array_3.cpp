
 #include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr; // Fixed-size array
    size_t i = 0; // Track entered numbers
    int num;

    cout << "Enter up to 5 positive numbers (-1 to stop): ";

    while (true) {
        cin >> num;
        if (num == -1 || i >= arr.size()) {
            break; // Stop if -1 is entered or array is full
        }

            arr[i] = num; // Store number in array
            i++; // Move to next index
    }

    cout << "Stored Numbers: ";
    for (size_t i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
       
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {5, 10, 15, 20, 25}; // Declare fixed-size array

    cout << "Accessing elements:\n";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}

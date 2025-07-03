#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 4> arr = {10, 20, 30, 40};

    int* ptr = arr.data();  // Get pointer to first element

    cout << "First element using pointer: " << *ptr << endl;

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "Element at index " << i << ": " << *(ptr + i) << endl;  // Access elements using pointer arithmetic
    }

    return 0;
}


#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {5, 10, 15, 20, 25};

    // Modifying elements using range-based for loop
    for (auto& num : arr) {
        num += 5; // Increment each element by 5
    }
    
    cout << "Modified Elements: ";
    int i = 0;
    for (int num : arr) {
        cout << "arr[" << i++ << "] = " << num << " ";
    }
    cout << endl;

    return 0;
}

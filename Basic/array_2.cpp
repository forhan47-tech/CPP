#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50};

    // Modifying elements using traditional for loop
    for (size_t i = 0; i < arr.size(); i++) {
        arr[i] += 5; // Increment each element by 5
    }
    
    cout << "Modified Elements: ";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

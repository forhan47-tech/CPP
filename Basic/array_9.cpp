#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr;

    arr.fill(100);  // Set all elements to 100

    cout << "Filled array: ";
    for (int num : arr) cout << num << " ";

    return 0;
}

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> arr1 = {1, 2, 3};
    array<int, 3> arr2 = {4, 5, 6};

    arr1.swap(arr2);  // Swaps contents

    cout << "After Swap - arr1: ";
    for (int num : arr1) cout << num << " ";
    cout << endl;

    return 0;
}


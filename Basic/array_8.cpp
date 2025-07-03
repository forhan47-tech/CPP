#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "Element at index 2: " << arr.at(2) << endl;

    arr[2] = 45;
    cout << "Element at index 2: " << arr[2] << endl;

    return 0;
}

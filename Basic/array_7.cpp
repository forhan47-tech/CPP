#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50}; // Fixed-size array

    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    cout << "Size: " << arr.size() << endl;
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;

    return 0;
}

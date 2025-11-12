#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8};

    // Sort the vector first
    sort(v.begin(), v.end());

    // Remove consecutive duplicates
    auto newEnd = unique(v.begin(), v.end());

    // Physically erase trailing elements
    v.erase(newEnd, v.end());

    // Output result
    cout << "After unique: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}

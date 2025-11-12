#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30, 20, 40};

    // Example 1: Remove all occurrences of 20
    auto new_end = erase(remove(v1.begin(), v1.end(), 20), v1.end());

    cout << "After removing 20: ";
    for (int n : v1) cout << n << " ";
    cout << endl;

    // Reset vector for next example
    v1 = {10, 20, 30, 20, 40};

    // Example 2: Remove elements less than 20
    new_end = remove_if(v1.begin(), v1.end(), [](int x) { return x < 20; });
    numbers.erase(new_end, v1.end());

    cout << "After removing elements < 20: ";
    for (int n : v1) cout << n << " ";
    cout << endl;

    return 0;
}

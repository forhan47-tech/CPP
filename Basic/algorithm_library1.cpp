#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {50, 10, 30, 20, 40, 20};

    // Check if the vector is already sorted
    cout << "Is the vector sorted? "
         << (is_sorted(v.begin(), v.end()) ? "Yes" : "No") << endl;

    // Sort in ascending order
    sort(v.begin(), v.end());
    cout << "Sorted in ascending order? "
         << (is_sorted(v.begin(), v.end()) ? "Yes" : "No") << endl;

    // Sort in descending order
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted in descending order? "
         << (is_sorted(v.begin(), v.end(), greater<int>()) ? "Yes" : "No") << endl;

    // Stable sort to preserve relative ordering
    stable_sort(v.begin(), v.end());
    cout << "After stable sort: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Partial sort: Only the first 2 elements will be sorted
    partial_sort(v.begin(), v.begin() + 2, v.end());
    cout << "After partial sort (first 2 elements): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    return 0;
}

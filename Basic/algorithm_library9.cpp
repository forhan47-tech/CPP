#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    // Sort the vector to prepare for equal_range
    sort(v.begin(), v.end()); 

    // Get the range of elements equal to 20
    auto range = equal_range(v.begin(), v.end(), 20);

    // Display all elements equal to 20
    cout << "Occurrences of 20: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }

    // Count total occurrences
    cout << "\nCount of 20: " << distance(range.first, range.second) << endl; 

    // Show the bounds
    cout << "Lower Bound of 20: " << *range.first << endl;  // Output: 20
    cout << "Upper Bound of 20: " << *range.second << endl;  // Output: 30
    
    // Show positions
    cout << "First Occurrence of 20: " << distance(v.begin(), range.first) << endl;  // Output: 1
    cout << "Last Occurrence of 20: " << distance(v.begin(), range.second) - 1 << endl;  // Output: 3

    return 0;
}


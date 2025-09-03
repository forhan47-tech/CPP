#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 10, 30, 30, 30, 100, 300, 300, 70, 70, 80};
    
    // Sort the vector first
    sort(v.begin(), v.end()); // v becomes: 10 10 30 30 30 70 70 80 100 300 300

    // Find range of all 30s
    auto range = equal_range(v.begin(), v.end(), 30);

    cout << "30 appears from index " << (range.first - v.begin())
         << " to " << (range.second - v.begin()) << "\n";
    
    // show lower and upper bounds
    cout << "Lower bound of 30 is: " << *range.first << "\n";
    cout << "Upper bound of 30 is: " << *range.second << "\n";    

    return 0;
}

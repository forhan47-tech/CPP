#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 10, 30, 30, 30, 100, 300, 300, 70, 70, 80};
    
    // Sort the vector first
    sort(v.begin(), v.end()); 

    // Example-1
    auto range = equal_range(v.begin(), v.end(), 30);

    cout << "30 appears from index " << (range.first - v.begin())
         << " to " << (range.second - v.begin()) << "\n";
    
    // show lower and upper bounds
    cout << "Lower bound of 30 is: " << *range.first << "\n";
    cout << "Upper bound of 30 is: " << *range.second << "\n";    

    // Example-2
    auto [start, end] = equal_range(v.begin(), v.end(), 2);

    cout << "2 appears from index "
         << (start - v.begin()) << " to "
         << (end - v.begin()) << endl;

    return 0;
}

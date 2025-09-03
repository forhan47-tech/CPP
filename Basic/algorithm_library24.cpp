#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {50, 20, 80, 10, 60};

    // Find min and max elements
    auto minIt = min_element(v.begin(), v.end());
    auto maxIt = max_element(v.begin(), v.end());

    cout << "Min element: " << *minIt << "\n"; // 10
    cout << "Max element: " << *maxIt << "\n"; // 80

    cout << "Index of Min element: " << distance(v.begin(), minIt) << "\n"; // 3
    cout << "Index of Max element: " << distance(v.begin(), maxIt) << "\n"; // 2

    // Find both min and max in a single pass
    auto [minIt2, maxIt2] = minmax_element(v.begin(), v.end());
    cout << "Min element (single pass): " << *minIt2 << "\n"; // 10
    cout << "Max element (single pass): " << *maxIt2 << "\n"; // 80

    return 0;
}

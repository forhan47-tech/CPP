#include <iostream>
#include <vector>
#include <algorithm>  // For min_element
using namespace std;

int main() {
    vector<int> num = {5, 2, 8, 1, 3};
    
    // Finding the minimum element
    auto minValue = min_element(num.begin(), num.end());
    cout << "Minimum Value: " << *minValue << endl;
    cout << "Index of Minimum Value: " << distance(num.begin(), minValue) << endl;

    // Finding the maximum element
    auto maxValue = max_element(num.begin(), num.end());
    cout << "Maximum Value: "  << *maxValue << endl;
    cout << "Index of Maximum Value: " << distance(num.begin(), maxValue) << endl;

    return 0;
}


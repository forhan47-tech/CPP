#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a class as a comparator
class CustomComparator {
public:
    bool operator()(int a, int b) const {
        return a > b; // Sorts in descending order
    }
};

int main() {
    vector<int> nums = {5, 2, 8, 1, 4};

    // Using the class comparator
    sort(nums.begin(), nums.end(), CustomComparator());

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

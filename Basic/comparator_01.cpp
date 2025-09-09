#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a struct as a comparator
struct CustomComparator {
    bool operator()(int a, int b) const {
        return a > b; 
    }
};

int main() {
    vector<int> nums = {5, 2, 8, 1, 4};

    // Using the struct comparator
    sort(nums.begin(), nums.end(), CustomComparator());

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

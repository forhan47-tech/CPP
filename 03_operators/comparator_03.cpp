#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define a function as a comparator
bool customComparator(int a, int b) {
    return a > b; 
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 4};

    // Using function comparator
    sort(nums.begin(), nums.end(), customComparator);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

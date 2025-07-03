#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(int a, int b) {
    return a > b; // Sorts in descending order
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 4};
    sort(nums.begin(), nums.end(), customComparator);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

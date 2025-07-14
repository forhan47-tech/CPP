#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1};

    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a < b;  // Ascending order
    });

    cout << "Sorted vector: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}

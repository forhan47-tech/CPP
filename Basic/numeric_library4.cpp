#include <iostream>
#include <vector>
#include <numeric>  // For adjacent_difference
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 50, 80};
    vector<int> result(nums.size());

    adjacent_difference(nums.begin(), nums.end(), result.begin());

    cout << "Adjacent Differences: ";
    for (int num : result) cout << num << " ";
    cout << endl;

    return 0;
}


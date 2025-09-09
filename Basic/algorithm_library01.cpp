#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {10, 25, 30, 45, 60};

    // std::find — search for exact value
    auto it1 = find(nums.begin(), nums.end(), 30);
    if (it1 != nums.end())
        cout << "Found value 30 at index: " << distance(nums.begin(), it1) << endl;

    // std::find_if — search using a condition
    auto it2 = find_if(nums.begin(), nums.end(), [](int x) { return x > 40 && x % 2 == 0; });
    if (it2 != nums.end())
        cout << "Found first even number > 40: " << *it2 << " at index: " << distance(nums.begin(), it2) << endl;

    return 0;
}

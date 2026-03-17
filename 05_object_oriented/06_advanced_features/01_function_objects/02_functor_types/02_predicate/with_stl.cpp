#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Descending {
public:
    bool operator()(int a, int b) {   // returns true if a > b
        return a > b;
    }
};

int main() {
    vector<int> nums = {5, 2, 8, 1, 3};

    sort(nums.begin(), nums.end(), Descending());    // Sort using predicate functor

    for (int n : nums)
        cout << n << " ";  
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 30, 40, 50};
    int key = 20;

    auto lb = lower_bound(v.begin(), v.end(), key);
    auto ub = upper_bound(v.begin(), v.end(), key);

    cout << "Lower bound of " << key << ": " << *lb << " at index " << lb - v.begin() << "\n";
    cout << "Upper bound of " << key << ": " << *ub << " at index " << ub - v.begin() << "\n";

    return 0;
}

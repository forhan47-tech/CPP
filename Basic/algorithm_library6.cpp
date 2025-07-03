#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 25, 30, 40, 50};

    // Find the first element ≥ target
    auto lower = lower_bound(numbers.begin(), numbers.end(), 25);
    if (lower != numbers.end())
        cout << "First element ≥ 25: " << *lower << endl;
    else
        cout << "No element ≥ 25 found!" << endl;

    // Find the first element > target
    auto upper = upper_bound(numbers.begin(), numbers.end(), 25);
    if (upper != numbers.end())
        cout << "First element > 25: " << *upper << endl;
    else
        cout << "No element > 25 found!" << endl;

    return 0;
}

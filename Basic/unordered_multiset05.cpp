#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {10, 20, 30, 30, 40, 50};

    auto range = ums.equal_range(30);

    cout << "Elements equal to 30: ";
    for (auto it = range.first; it != range.second; ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Count via distance: " << distance(range.first, range.second) << endl;
    return 0;
}

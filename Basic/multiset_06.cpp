#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 30, 40, 50};

    auto range = ms.equal_range(30);  // Get range of elements equal to 30

    cout << "Elements equal to 30: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Distance between first and last occurrence of 30: " 
         << distance(range.first, range.second) << endl;
    return 0;
}


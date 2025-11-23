#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {5, 1, 3, 4, 1}; // duplicates allowed

    for (int val : ums)
        cout << val << " ";
    return 0;
}

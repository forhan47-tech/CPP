#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {30, 10, 20, 10, 40, 10};

    ums.insert(50);           // Insert new element
    ums.erase(10);            // Removes all occurrences of 10
    ums.erase(ums.begin());   // Remove one element via iterator

    for (int num : ums)
        cout << num << " ";
    return 0;
}

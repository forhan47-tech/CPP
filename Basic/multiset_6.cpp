#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {30, 10, 20, 10, 40, 10};  // Allows duplicate 10

    ms.insert(50);   // Insert new element
    ms.erase(10);    // Removes all occurrences of 10

    for (int num : ms) {
        cout << num << " ";  // Output: 20 30 40 50 (sorted)
    }

    return 0;
}


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {30, 10, 20, 40, 10};  // Duplicate 10 is ignored

    s.insert(50);   // Insert new element  
    s.erase(20);    // Remove element

    // Iterating over a set
    for (int num : s) {
        cout << num << " ";  // Output: 10 30 40 50 (sorted & unique)
    }

    return 0;
}


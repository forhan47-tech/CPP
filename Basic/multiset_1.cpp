#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 30, 40, 50};

    // multiset<int, greater<int>> ms = {10, 20, 30, 30, 40, 50}; // Initializes a multiset with elements in descending order --- IGNORE ---

    for (int num : ms) {
        cout << num << " ";
    }

    return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {10, 20, 30, 40, 50};

    // set<int, greater<int>> mySet = {10, 20, 30, 40, 50}; // Initializes a set with elements in descending order --- IGNORE ---

    for (int num : mySet) {
        cout << num << " ";
    }

    return 0;
}

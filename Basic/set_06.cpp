#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {5, 6, 7, 8};

    // Swap sets
    set1.swap(set2);

    cout << "\nAfter swapping:\n";
    cout << "Set 1: ";
    for (int num : set1) cout << num << " ";
    return 0;
}


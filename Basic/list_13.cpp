#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = {1, 3, 5, 7};
    list<int> list2 = {2, 4, 6, 8};

    list1.merge(list2);  // Merges list2 into list1 (both must be sorted)

    cout << "Merged Sorted List: ";
    for (int num : list1) cout << num << " ";  // Output: 1 2 3 4 5 6 7 8

    return 0;
}


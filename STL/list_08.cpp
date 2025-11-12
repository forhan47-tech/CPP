#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst1 = {1, 3, 5, 7};
    list<int> lst2 = {2, 4, 6, 8};

    lst1.merge(lst2);  // Merges list2 into list1 (both must be sorted)

    cout << "Merged Sorted List: ";
    for (int num : lst1) cout << num << " "; 

    return 0;
}


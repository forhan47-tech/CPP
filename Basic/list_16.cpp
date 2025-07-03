#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l1 = {1, 2, 5};
    list<int> l2 = {4, 3};
    
    // Moving all elements from l2 to the beginning of l1
    l1.splice(l1.begin(), l2); // Moves all elements of l2 to the beginning of l1

    cout << "After moving l2 to the beginning of l1: ";
    for (int num : l1) cout << num << " ";
    cout << endl;

    // moving the first element of l1 to the end of l1
    l1.splice(l1.end(), l1, l1.begin()); // Moves the first element of l1 to the end of l1

    cout << "After moving first element to end: ";
    for (int num : l1) cout << num << " ";
    cout << endl;

    // Moving a range of elements from l1 to l2
    auto first = l1.begin();
    auto last = next(first, 2); // Get an iterator to the second element

    l2.splice(l2.end(), l1, first, last); // Moves the first two elements of l1 to the end of l2
    
    cout << "After moving first two elements of l1 to l2: ";
    for (int num : l2) cout << num << " ";
    cout << endl;

    
    return 0;
}


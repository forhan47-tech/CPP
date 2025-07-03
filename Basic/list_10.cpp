#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    l.push_back(4);  // Add 4 at the end
    l.push_front(0); // Add 0 at the front

    auto it = l.begin();
    advance(it, 2);  // Move iterator to third element
    l.insert(it, 99);  // Insert 99 at position 2

    l.erase(it);  // Remove element at position 2

    cout << "Modified List: ";
    for (int num : l) cout << num << " ";

    return 0;
}


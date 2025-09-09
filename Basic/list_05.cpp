#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    auto it = l.begin();
    advance(it, 2);  

    l.insert(it, 99);  // Insert 99 at position 2
    l.erase(it);  // Remove element at position 2

    cout << "Modified List: ";
    for (int num : l) cout << num << " ";

    return 0;
}


#include <iostream>
#include <list>

using namespace std; // Using namespace std to simplify syntax

int main() {
    list<int> myList = {1, 2, 2, 3, 4, 4, 4, 5};

    myList.unique(); // Removes consecutive duplicates

    cout << "List after unique(): ";
    for (int num : myList) {
        cout << num << " ";
    }

    return 0;
}


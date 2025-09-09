#include <iostream>
#include <list>
using namespace std; 

int main() {
    list<int> lst = {1, 2, 2, 3, 4, 4, 4, 5};

    lst.unique(); // Removes consecutive duplicates

    cout << "List after unique(): ";
    for (int num : lst) {
        cout << num << " ";
    }

    return 0;
}


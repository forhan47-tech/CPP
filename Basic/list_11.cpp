#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {30, 10, 50, 20, 40};

    l.sort();  // Sorts in ascending order
    
    // l.sort(greater<int>());  // Sorts in descending order

    cout << "Sorted List: ";
    for (int num : l) cout << num << " ";  // Output: 10 20 30 40 50

    return 0;
}


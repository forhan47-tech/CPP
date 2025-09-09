#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {30, 10, 20, 10, 40, 10};  

    ms.insert(50);   // Insert new element

    ms.erase(10);    // Removes all occurrences of 10
    ms.erase(ms.begin()); // Remove using iterator

    for (int num : ms) {
        cout << num << " ";  
    }
    return 0;
}


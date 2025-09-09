#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {30, 10, 20, 40, 10};  

    s.insert(50);   // Insert new element  
    s.erase(20);    // Remove element

    for (int num : s) {
        cout << num << " ";  
    }

    return 0;
}


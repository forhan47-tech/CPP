#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    
    v.push_back(4);  // Add 4 to the end

    v.pop_back();    // Remove last element
    
    v.insert(v.begin() + 1, 10);  // Insert 10 at index 1
    
    v.erase(v.begin());  // Remove first element

    cout << "Modified Vector: ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}


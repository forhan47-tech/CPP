#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Sort the vector before performing binary search
    sort(v.begin(), v.end());

    // Search for the element 30
    bool found = binary_search(v.begin(), v.end(), 30);
    
    if (found) {
        cout << "Element 30 found!" << endl;
    } else {
        cout << "Element 30 not found!" << endl;
    }

    cout << "Is 30 in the vector? " << (found ? "Yes" : "No") << endl;

    return 0;
}

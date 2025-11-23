#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};
    
    // Find an element
    auto it = s.find(30);     
    if (it != s.end()) {
        cout << "Index: " << distance(s.begin(), it) << endl; // Get index
    }

    // Check if an element exists
    cout << "Does 30 exist? " << (s.count(30) ? "Yes" : "No") << endl;

    // Check if an element exists
    bool exists = s.contains(30);
    cout << "Does 30 exist? " << (exists ? "Yes" : "No") << endl;

    return 0;
}


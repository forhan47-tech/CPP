#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    
    v.clear();  // Remove all elements
    cout << "Size after clearing: " << v.size() << endl;
    
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    v.resize(5);  // Resize to 5 elements
    cout << "Size after resizing: " << v.size() << endl;
    return 0;
}


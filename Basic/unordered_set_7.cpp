#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {30, 10, 20, 40, 10};  // Duplicate 10 ignored

    cout << "\ndoes 10 exist? " << (us.find(10) != us.end() ? "Yes" : "No") << endl;  // Output: Yes
    
    cout << "\nDoes 30 exist? " << (us.count(30) ? "Yes" : "No") << endl;

    return 0;
}


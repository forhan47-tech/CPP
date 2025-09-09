#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30};

    us.clear();  // Removes all elements
    cout << "Unordered set size after clear: " << us.size() << endl;
    
    cout << "Is Empty? " << (us.empty() ? "Yes" : "No");
    return 0;
}

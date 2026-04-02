#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30};
    auto range = us.equal_range(20);

    cout << "Equal range for 20: ";
    for(auto it = range.first; it != range.second; ++it)
        cout << *it << " "; 
}

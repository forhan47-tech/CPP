#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40, 50}; 

    us.insert(25);  // Insert element
    us.erase(10);   // Remove element

    cout << "Unordered set elements: ";
    for (int num : us) cout << num << " ";
    return 0;
}

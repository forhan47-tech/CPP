#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30}; // duplicates kept
    for (int x : ms) cout << x << " ";  
}

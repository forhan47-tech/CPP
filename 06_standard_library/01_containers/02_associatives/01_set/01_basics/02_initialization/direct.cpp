#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 20, 10}; // duplicates removed
    for (int x : s) cout << x << " ";  
}

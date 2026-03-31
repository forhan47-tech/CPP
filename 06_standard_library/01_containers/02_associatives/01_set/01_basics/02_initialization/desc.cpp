#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int, greater<int>> s = {10, 20, 30}; // descending order
    for (int x : s) cout << x << " "; 
}

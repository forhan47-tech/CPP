#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int, greater<int>> ms = {10, 20, 20, 30}; // descending order
    for (int x : ms) cout << x << " ";
}

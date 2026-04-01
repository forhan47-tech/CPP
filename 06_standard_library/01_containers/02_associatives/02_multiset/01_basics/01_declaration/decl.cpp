#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;   // empty multiset 
    ms.insert(10);
    ms.insert(20);
    for (int x : ms) cout << x << " ";
}

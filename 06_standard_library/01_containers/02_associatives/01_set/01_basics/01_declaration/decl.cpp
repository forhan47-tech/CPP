#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;   // empty set
    
    s.insert(5);
    s.insert(10);

    for (int x : s) cout << x << " "; 
}

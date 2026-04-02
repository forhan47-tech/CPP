#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {3, 4, 5};
    s1.merge(s2);
    for(int x : s1) cout << x << " "; 
}

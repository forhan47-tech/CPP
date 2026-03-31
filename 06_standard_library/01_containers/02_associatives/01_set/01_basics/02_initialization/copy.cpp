#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2(s1);   // copy of s1
    for (int x : s2) cout << x << " "; 
}

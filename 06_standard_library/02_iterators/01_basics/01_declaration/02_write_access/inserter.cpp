#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    set<int> s = {1,2};
    auto it = inserter(s, s.begin()); // output iterator
    *it = 3; 
    *it = 4;
    for(int x : s) cout << x << " "; 
}

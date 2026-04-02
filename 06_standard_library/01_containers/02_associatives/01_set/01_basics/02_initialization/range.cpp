#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 3, 8, 3};
    set<int> s(v.begin(), v.end()); // duplicates removed, sorted
    for(int x : s) cout << x << " "; 
}

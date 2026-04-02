#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 3, 8, 3};
    multiset<int> ms(v.begin(), v.end()); // duplicates preserved, sorted
    for(int x : ms) cout << x << " "; 
}

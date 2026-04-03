#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,1,2,2,3,3};
    auto new_end = unique(v.begin(), v.end());
    v.erase(new_end, v.end());
    for(int x : v) cout << x << " "; 
}

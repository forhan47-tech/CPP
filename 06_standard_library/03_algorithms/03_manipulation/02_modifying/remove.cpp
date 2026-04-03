#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,2,4};
    auto new_end = remove(v.begin(), v.end(), 2);
    v.erase(new_end, v.end()); // actually shrink container
    for(int x : v) cout << x << " "; 
}

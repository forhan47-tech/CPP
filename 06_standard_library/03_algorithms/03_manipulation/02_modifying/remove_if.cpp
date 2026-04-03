#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    auto new_end = remove_if(v.begin(), v.end(), [](int x){ return x%2==0; });
    v.erase(new_end, v.end()); // actually shrink
    for(int x : v) cout << x << " "; 
}

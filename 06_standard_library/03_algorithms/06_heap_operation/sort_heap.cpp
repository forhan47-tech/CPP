#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3,1,4,5};
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    for(int x : v) cout << x << " "; 
}

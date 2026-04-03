#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,3,5,2,4,6};
    inplace_merge(v.begin(), v.begin()+3, v.end());
    for(int x : v) cout << x << " "; 
}

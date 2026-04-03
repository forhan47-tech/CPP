#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {9,1,8,2,7,3};
    partial_sort(v.begin(), v.begin()+3, v.end());
    for(int x : v) cout << x << " "; 
}

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    set<int> a = {1,2,3};
    set<int> b = {2,3,4};
    vector<int> result;

    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    for(int x : result) cout << x << " "; 
}

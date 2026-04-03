#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1,3,5};
    vector<int> b = {2,4,6};
    vector<int> result;
    
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    for(int x : result) cout << x << " "; 
}

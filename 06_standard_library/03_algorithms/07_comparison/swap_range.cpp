#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,6};
    swap_ranges(a.begin(), a.end(), b.begin());
    for(int x : a) cout << x << " "; 
}

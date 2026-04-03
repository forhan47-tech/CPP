#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {1,4,3};
    auto res = mismatch(a.begin(), a.end(), b.begin());
    cout << "Mismatch: " << *res.first << " vs " << *res.second << endl; 
}

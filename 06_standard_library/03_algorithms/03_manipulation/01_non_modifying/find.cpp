#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10,20,30};
    auto it = find(v.begin(), v.end(), 20);
    if(it != v.end()) cout << "Found: " << *it << endl; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    auto it = find_if(v.begin(), v.end(), [](int x){ return x > 3; });
    cout << *it << endl; 
}

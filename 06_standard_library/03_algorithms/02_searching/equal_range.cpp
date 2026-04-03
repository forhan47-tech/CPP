#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,4,4,5};
    auto range = equal_range(v.begin(), v.end(), 4);
    cout << "Equal range of 4: ";
    for(auto it = range.first; it != range.second; ++it)
        cout << *it << " ";
}

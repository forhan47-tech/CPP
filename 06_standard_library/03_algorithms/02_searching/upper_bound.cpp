#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,4,4,5};
    auto it = upper_bound(v.begin(), v.end(), 4);
    cout << "Upper bound of 4: " << *it << endl; 
}

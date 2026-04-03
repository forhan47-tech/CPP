#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {2,4,6,1,3,5};
    bool ok = is_partitioned(v.begin(), v.end(), [](int x){ return x%2==0; });
    cout << (ok ? "Partitioned" : "Not Partitioned") << endl; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> src = {1,2,3,4,5};
    vector<int> dest;
    copy_if(src.begin(), src.end(), back_inserter(dest), [](int x){ return x%2==0; });
    for(int x : dest) cout << x << " "; 
}

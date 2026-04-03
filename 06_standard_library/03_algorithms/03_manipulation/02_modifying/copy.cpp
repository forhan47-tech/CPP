#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> src = {1,2,3};
    vector<int> dest(3);
    copy(src.begin(), src.end(), dest.begin());
    for(int x : dest) cout << x << " "; 
}

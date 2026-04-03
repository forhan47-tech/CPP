#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,2,3};
    replace(v.begin(), v.end(), 2, 9);
    for(int x : v) cout << x << " "; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10,20,30};
    iter_swap(v.begin(), v.begin()+2);
    for(int x : v) cout << x << " "; 
}

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4};
    vector<int> out(4);
    partial_sum(v.begin(), v.end(), out.begin());
    for(int x : out) cout << x << " "; 
}

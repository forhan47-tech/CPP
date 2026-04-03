#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {1,3,6,10};
    vector<int> out(4);
    adjacent_difference(v.begin(), v.end(), out.begin());
    for(int x : out) cout << x << " "; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    vector<int> out(3);
    transform(v.begin(), v.end(), out.begin(), [](int x){ return x*2; });
    for(int x : out) cout << x << " "; 
}

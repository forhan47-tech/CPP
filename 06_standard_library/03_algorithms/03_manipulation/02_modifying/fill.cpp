#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(5);
    fill(v.begin(), v.end(), 42);
    for(int x : v) cout << x << " "; 
}

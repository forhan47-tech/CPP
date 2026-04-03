#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v;
    auto it = back_inserter(v); // output iterator
    *it = 10; 
    *it = 20; 
    *it = 30;
    for(int x : v) cout << x << " "; 
}

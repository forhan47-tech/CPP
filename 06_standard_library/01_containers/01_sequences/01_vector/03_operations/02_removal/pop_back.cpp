#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.pop_back();   // remove last element
    for (int x : v) cout << x << " "; 
}

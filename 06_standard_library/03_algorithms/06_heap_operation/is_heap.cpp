#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {9,5,3,4};
    make_heap(v.begin(), v.end());
    cout << (is_heap(v.begin(), v.end()) ? "Heap" : "Not Heap") << endl; 
}

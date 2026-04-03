#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3,1,4};
    make_heap(v.begin(), v.end());
    v.push_back(5);        // add new element
    push_heap(v.begin(), v.end()); // adjust heap
    cout << "Max element: " << v.front() << endl; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3,1,4,1,5};
    make_heap(v.begin(), v.end());
    cout << "Max element: " << v.front() << endl; 
}

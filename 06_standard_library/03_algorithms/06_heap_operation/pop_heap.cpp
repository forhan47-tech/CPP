#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3,1,4,5};
    make_heap(v.begin(), v.end());
    pop_heap(v.begin(), v.end()); // largest moved to end
    cout << "Popped: " << v.back() << endl;
    v.pop_back(); // actually remove it
}

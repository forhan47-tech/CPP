#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << (is_sorted(v.begin(), v.end()) ? "Sorted" : "Not Sorted") << endl; 
}

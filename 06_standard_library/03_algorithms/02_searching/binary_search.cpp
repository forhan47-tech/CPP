#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    bool found = binary_search(v.begin(), v.end(), 3);
    cout << (found ? "Found" : "Not Found") << endl; 
}

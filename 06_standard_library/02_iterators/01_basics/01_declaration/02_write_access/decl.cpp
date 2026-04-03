#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    auto it = v.begin();
    *it = 99; // Write: modifies first element
    cout << v[0] << endl; 
}

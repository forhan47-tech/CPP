#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v[1] = 50;   // direct access
    v.at(2) = 100;   // safe modification

    cout << "Modified vector: ";
    for (int x : v) cout << x << " "; 
    return 0;
}

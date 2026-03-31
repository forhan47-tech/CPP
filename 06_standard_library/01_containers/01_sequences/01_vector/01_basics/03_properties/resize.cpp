#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.resize(5);   // expands to 5 elements, adds 0s
    for (int x : v) cout << x << " "; 
}

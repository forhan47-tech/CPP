#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2(v1.begin(), v1.end());   // copy all elements
    for (int x : v2) cout << x << " "; 
}

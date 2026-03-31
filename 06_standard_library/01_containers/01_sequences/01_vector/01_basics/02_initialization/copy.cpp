#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30};
    vector<int> v2(v1);   // copy of v1
    for (int x : v2) cout << x << " "; 
}

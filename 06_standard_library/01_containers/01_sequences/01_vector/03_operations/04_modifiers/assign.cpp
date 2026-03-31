#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.assign(5, 7);   // 5 elements, all 7
    for (int x : v) cout << x << " "; 
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(4, 100);   // 4 elements, all 100
    for (int x : v) cout << x << " "; 
}

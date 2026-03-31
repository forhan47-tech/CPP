#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);   // 5 elements, all 0
    for (int x : v) cout << x << " ";
}

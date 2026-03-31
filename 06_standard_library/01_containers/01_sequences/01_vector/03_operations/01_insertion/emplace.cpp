#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.emplace(v.begin() + 1, 99);   // construct 99 at index 1
    for (int x : v) cout << x << " ";
}

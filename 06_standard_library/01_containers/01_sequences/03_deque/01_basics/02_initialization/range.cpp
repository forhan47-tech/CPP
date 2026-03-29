#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    deque<int> d(v.begin(), v.end());   // copy from vector
    for (int x : d) cout << x << " ";
}

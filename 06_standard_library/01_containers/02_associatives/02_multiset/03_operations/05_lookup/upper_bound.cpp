#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30, 40};

    auto it = ms.upper_bound(20);
    cout << "Upper bound of 20: " << *it << endl; // 30 (skips all 20s)
}

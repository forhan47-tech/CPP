#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};
    auto lb = ms.lower_bound(20);
    cout << "Lower bound of 20: " << *lb << endl; // 20 (first occurrence)
}

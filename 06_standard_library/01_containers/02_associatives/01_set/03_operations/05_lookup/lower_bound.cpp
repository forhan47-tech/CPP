#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    auto lb = s.lower_bound(25);
    cout << "Lower bound of 25: " << *lb << endl; // 30
}

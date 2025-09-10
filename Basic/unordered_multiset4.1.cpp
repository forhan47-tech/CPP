#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {10, 20, 30};

    ums.clear();

    cout << "Multiset size after clear: " << ums.size() << endl;
    cout << "Set empty: " << (ums.empty() ? "Yes" : "No") << endl;
    return 0;
}

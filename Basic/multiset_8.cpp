#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30};

    ms.clear();  // Removes all elements

    cout << "Multiset size after clear: " << ms.size() << endl;
    cout << "Set empty: " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}

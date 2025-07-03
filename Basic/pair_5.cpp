#include <iostream>
#include <set>
using namespace std;

int main() {
    set<pair<int, string>> st = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    st.emplace(4, "David");  // Add a new pair

    for (const auto& p : st) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}


#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {3, "Charlie"}, {5, "Eve"}};

    auto it = m.lower_bound(3);
    if (it != m.end())
        cout << "Lower bound of 3: " << it->first << " -> " << it->second << endl;
}

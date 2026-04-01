#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {3, "Charlie"}, {5, "Eve"}};

    auto it = m.upper_bound(3);
    if (it != m.end())
        cout << "Upper bound of 3: " << it->first << " -> " << it->second << endl;
}

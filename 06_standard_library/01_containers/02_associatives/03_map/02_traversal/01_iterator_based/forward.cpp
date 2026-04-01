#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    cout << "Forward traversal: ";
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << " ";
    }
}

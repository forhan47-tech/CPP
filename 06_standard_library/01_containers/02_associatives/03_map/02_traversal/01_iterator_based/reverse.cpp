#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    cout << "Reverse traversal: ";
    for (auto rit = m.rbegin(); rit != m.rend(); ++rit) {
        cout << rit->first << " -> " << rit->second << " ";
    }
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    cout << "Range-based traversal: ";
    for (auto &p : m) {
        cout << p.first << " -> " << p.second << " ";
    }
}

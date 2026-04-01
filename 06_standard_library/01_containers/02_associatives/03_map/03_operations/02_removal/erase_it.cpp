#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = m.find(3); // iterator to key 3
    if (it != m.end())
        m.erase(it); // removes key 3

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}

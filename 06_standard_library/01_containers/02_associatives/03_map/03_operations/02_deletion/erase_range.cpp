#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}, {4, "David"}};

    auto start = m.find(2); // iterator to key 2
    auto end   = m.find(4); // iterator to key 4 (not included)

    m.erase(start, end); // removes keys 2 and 3

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}

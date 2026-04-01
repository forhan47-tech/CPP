#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    m.erase(2); // removes key 2
    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = m.find(2);
    if (it != m.end())
        cout << "Found: " << it->first << " -> " << it->second << endl;
    else
        cout << "Key not found" << endl;
}

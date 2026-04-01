#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto range = m.equal_range(2);
    if (range.first != range.second)
        cout << "Equal range for 2: " << range.first->first << " -> " << range.first->second << endl;
    else
        cout << "Key not found" << endl;
}

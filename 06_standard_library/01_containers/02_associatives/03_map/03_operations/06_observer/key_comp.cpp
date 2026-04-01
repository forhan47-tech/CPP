#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto comp = m.key_comp(); // comparator for keys

    cout << "Compare 1 and 2: " << (comp(1, 2) ? "1 < 2" : "1 >= 2") << endl;
}

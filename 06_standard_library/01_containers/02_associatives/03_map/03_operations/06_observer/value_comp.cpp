#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto comp = m.value_comp(); // comparator for pairs

    auto it1 = m.begin();       // {1, "Alice"}
    auto it2 = next(m.begin()); // {2, "Bob"}

    cout << "Compare pairs: "
         << (comp(*it1, *it2) ? "First < Second" : "First >= Second") << endl;
}

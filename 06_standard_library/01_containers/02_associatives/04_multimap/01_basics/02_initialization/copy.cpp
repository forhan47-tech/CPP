#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm1 = {{1, "Alice"}, {2, "Bob"}};
    multimap<int, string> mm2(mm1); // copy of mm1

    for (auto [k, v] : mm2)
        cout << k << " -> " << v << endl;
}

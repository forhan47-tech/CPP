#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "A"}, {2, "B"}};
    multimap<int, string> mm(m.begin(), m.end());

    for (auto [k, v] : mm)
        cout << k << " -> " << v << endl;
}

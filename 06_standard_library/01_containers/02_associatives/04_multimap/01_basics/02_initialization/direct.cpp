#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm = {
        {1, "Alice"},
        {2, "Bob"},
        {1, "Charlie"} // duplicate key allowed
    };

    for (auto [k, v] : mm)
        cout << k << " -> " << v << endl;
}

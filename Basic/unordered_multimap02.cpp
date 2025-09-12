#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm = {
        {1, "Apple"},
        {2, "Banana"},
        {2, "Blueberry"},
        {3, "Cherry"}
    };

    umm.emplace(2, "Date");  // Insert duplicate key
    umm.erase(3);            // Remove all entries with key 3

    for (const auto& [k, v] : umm)
        cout << k << " -> " << v << endl;

    return 0;
}

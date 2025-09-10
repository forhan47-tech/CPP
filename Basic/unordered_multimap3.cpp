#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm = {
        {1, "Apple"},
        {2, "Banana"},
        {3, "Cherry"}
    };

    umm.clear();

    cout << "Map size after clear: " << umm.size() << endl;
    cout << "Is Empty? " << (umm.empty() ? "Yes" : "No") << endl;

    return 0;
}

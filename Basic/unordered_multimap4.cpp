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

    cout << "Count of Key 2: " << umm.count(2) << endl;

    auto it = umm.find(2);
    if (it != umm.end())
        cout << "First occurrence of Key 2: " << it->second << endl;
    return 0;
}

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm = {
        {1, "Apple"},
        {2, "Banana"},
        {2, "Berry"},
        {3, "Cherry"}
    };

    auto range = umm.equal_range(2);

    cout << "Values for key 2: ";
    for (auto it = range.first; it != range.second; ++it)
        cout << it->second << " ";

    return 0;
}

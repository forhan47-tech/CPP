#include <iostream>
#include <map>

using namespace std;  // Place this at the top for global namespace usage

int main() {
    multimap<int, string> mm = {
        {1, "Apple"},
        {2, "Banana"},
        {2, "Berry"},
        {3, "Cherry"}
    };

    // Retrieve all values associated with key '2'
    auto range = mm.equal_range(2);

    cout << "Values for key 2: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }

    return 0;
}


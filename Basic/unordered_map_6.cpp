#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    um.insert({4, "Date"});  // Insert element

    um[5] = "Date";  // Update key 3
    
    um.emplace(6, "Elderberry");  // Insert new key 4

    um.erase(2);     // Removes key 2

    for (const auto& pair : um) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}


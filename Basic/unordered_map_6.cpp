#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    um.at(1) = "Apricot"; // Modify value for key 1
    cout << "Value of key 1: " << um.at(1) << endl;
    
    um.emplace(6, "Elderberry");  // Insert new key 4

    um.erase(2);     // Removes key 2

    for (const auto& pair : um) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}


#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;  // Key = int, Value = string

    m.emplace(1, "Mango");  // Emplace for efficiency
    m.emplace(2, "Apple");  // Emplace for efficiency

    m.at(2) = "Banana";  // Update value for key 2

    m.erase(1);  // Remove key 1

    
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}


#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;  // Key = int, Value = string

    m.insert({1, "Apple"});

    m.emplace(2, "Apple");  // Emplace for efficiency
    
     m[3] = "Date";  // Insert or update key 

    m.erase(1);  // Remove key 1

    
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}


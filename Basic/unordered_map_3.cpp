#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> um;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 10; i++) {
        int key;
        string value;
        cin >> key >> value;
        um[key] = value;  // Insert key-value pair
    }

    cout << "Unordered map elements:\n";
    for (const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

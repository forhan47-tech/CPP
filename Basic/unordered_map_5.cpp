#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

int main() {
    unordered_map<int, string> um;
    string input;
    int key;
    string value;

    cout << "Enter key-value pairs separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> key >> value) {
        um[key] = value;
    }

    cout << "Unordered map elements:\n";
    for (const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

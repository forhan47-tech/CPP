#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> um;
    int key;
    string value;

    cout << "Enter key-value pairs (type -1 to stop):\n";
    while (cin >> key && key != -1) {
        cin >> value;
        um.insert({key, value});
    }

    cout << "Unordered map elements:\n";
    for (const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

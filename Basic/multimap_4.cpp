#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> mm;
    int key;
    string value;

    cout << "Enter key-value pairs (type -1 to stop):\n";
    while (cin >> key && key != -1) {
        cin >> value;
        mm.emplace(key, value); // Insert key-value pair
    }

    cout << "Multimap elements:\n";
    for (const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

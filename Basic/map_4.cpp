#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;
    int key;
    string value;

    cout << "Enter key-value pairs (type -1 to stop):\n";
    while (cin >> key && key != -1) {
        cin >> value;
        myMap.emplace(key, value);
    }

    cout << "Map elements:\n";
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1;

    int key;
    string value;
    cout << "Enter key-value pairs (type -1 to stop):\n";
    while (cin >> key && key != -1) {
        cin >> value;
        m1.emplace(key, value);
    }

    cout << "Map elements:\n";
    for (const auto& pair : m1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

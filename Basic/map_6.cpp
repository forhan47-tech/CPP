#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> records;
    int id;
    string name;

    cout << "Enter ID and name pairs (type -1 to stop): ";
    while (cin >> id && id != -1) {
        cin.ignore();  // Ignore newline
        getline(cin, name);
        records[id] = name;
    }

    cout << "Stored ID-Name pairs:\n";
    for (const auto& entry : records) {
        cout << entry.first << " -> " << entry.second << endl;
    }

    return 0;
}


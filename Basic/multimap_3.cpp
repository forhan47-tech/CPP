#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> mm;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 9; i++) {
        int key;
        string value;
        cin >> key >> value;
        mm.insert({key, value});  // Insert key-value pair
    }

    cout << "Multimap elements:\n";
    for (const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

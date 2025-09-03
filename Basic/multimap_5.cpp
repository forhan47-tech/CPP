#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    multimap<int, string> mm;
    string input;
    int key;
    string value;

    cout << "Enter key-value pairs separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> key >> value) {
        mm.emplace(key, value); // Insert key-value pair
    }

    cout << "Multimap elements:\n";
    for (const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

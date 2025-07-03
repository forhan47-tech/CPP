#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    map<int, string> myMap;
    string input;
    int key;
    string value;

    cout << "Enter key-value pairs separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> key >> value) {
        myMap[key] = value;
    }

    cout << "Map elements:\n";
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

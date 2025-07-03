#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;

    cout << "Enter number of elements: "; 
    for (int i = 0; i < 9; i++) {
        int key;
        string value;
        cin >> key >> value;
        myMap[key] = value;  // Insert key-value pair
    }

    cout << "Map elements:\n";
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1;

    int key;
    string value;
    cout << "Enter number of elements: "; 
    for (int i = 0; i < 9; i++) {
        cin >> key >> value;
        m1[key] = value;  
    }

    cout << "Map elements:\n";
    for (const auto& pair : m1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

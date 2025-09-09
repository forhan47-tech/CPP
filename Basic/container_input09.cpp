#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    map<int, string> m1;

    string input;  
    cout << "Enter key-value pairs separated by spaces: ";
    getline(cin, input);  

    int key;
    string value;  
    stringstream ss(input);   
    while (ss >> key >> value) {
        m1[key] = value;
    }

    cout << "Map elements:\n";
    for (const auto& pair : m1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

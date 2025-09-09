#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, char> m1 = {{1, 'A'}, {2, 'B'}, {3, 'C'}};
    map<int, char> m2 = {{4, 'X'}, {5, 'Y'}, {6, 'Z'}};

    m1.swap(m2); // swap key

    cout << "\nAfter swapping:\n";
    cout << "Map 1: ";
    for (const auto& pair : m1) cout << pair.first << ":" << pair.second << " ";
    
    cout << "\nMap 2: ";
    for (const auto& pair : m2) cout << pair.first << ":" << pair.second << " ";
    cout << endl;

    return 0;
}


#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, char> map1 = {{1, 'A'}, {2, 'B'}, {3, 'C'}};
    map<int, char> map2 = {{4, 'X'}, {5, 'Y'}, {6, 'Z'}};

    // Swap maps
    map1.swap(map2);

    cout << "\nAfter swapping:\n";
    cout << "Map 1: ";
    for (const auto& pair : map1) cout << pair.first << ":" << pair.second << " ";
    
    cout << "\nMap 2: ";
    for (const auto& pair : map2) cout << pair.first << ":" << pair.second << " ";
    cout << endl;

    return 0;
}


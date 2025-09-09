#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1 = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    map<int, string, greater<int>> m2 = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Map 1:\n";
    for (const auto& pair : m1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;

    cout << "Map 2:\n";
    for (const auto& [key, value] : m2) {
        cout << key << " => " << value << "\n";
    }
    cout << endl;
    return 0;
}

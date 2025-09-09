#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm1 = {{1, "Apple"}, {2, "Banana"}, {1, "Cherry"}};

    multimap<int, string, greater<int>> mm2 = {{1, "Apple"}, {2, "Banana"}, {1, "Cherry"}}; 

    cout << "MultiMap 1:\n";
    for (const auto& pair : mm1) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "MultiMap 2:\n";
    for (auto& [key, value] : mm2) {
        cout << key << " => " << value << "\n";
    }
    cout << endl;

    return 0;
}

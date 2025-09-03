#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {1, "Cherry"}};

    // multimap<int, string, greater<int>> mm = {{1, "Apple"}, {2, "Banana"}, {1, "Cherry"}}; --- IGNORE ---

    for (const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

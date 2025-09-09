#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {2, "Blueberry"}, {3, "Cherry"}};

    mm.emplace(2, "Date");  // Insert duplicate key 2 using emplace
    mm.erase(3);

    for (const auto& pair : mm) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}


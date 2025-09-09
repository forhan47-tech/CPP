#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Map elements using iterator: ";
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}


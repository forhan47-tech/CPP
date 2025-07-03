#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    for (const auto& entry : myMap) {
        cout << entry.first << " -> " << entry.second << endl;
    }

    return 0;
}


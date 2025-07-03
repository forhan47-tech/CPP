#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

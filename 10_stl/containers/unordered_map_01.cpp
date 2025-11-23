#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    for (const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

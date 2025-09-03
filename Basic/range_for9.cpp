#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> marks = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 92}
    };

    // Using structured bindings to unpack key-value pairs
    for (auto [name, score] : marks) {
        cout << name << ": " << score << endl;
    }

    return 0;
}

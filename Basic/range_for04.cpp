#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 92}
    };

    // Reference allows Modification
    for (auto& [name, score] : marks) {
        score += 5;
    }

    cout << "Modified values: ";
    for (const auto& [name, score] : marks) {
        cout << name << ": " << score << endl;
    }

    return 0;
}

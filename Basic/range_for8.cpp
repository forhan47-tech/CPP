#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 92}
    };

    // Add 5 bonus points to each student
    for (auto& entry : marks) {
        entry.second += 5;
    }

    // Display updated marks
    for (const auto& entry : marks) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
